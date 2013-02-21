#! /usr/bin/env python

###########################################################
# addFloatCoords2TiePoints.py
# A script to add coordinated from the floating image
# to tie points generated by RSGISLib.
# Also calculates RMSE and adds, difference to output CSV
# as deltaX, deltaY and power and phase for vector field
# type display in ArcGIS or other packages.
#
# Dan Clewley (daniel.clewley@gmail.com) - 20/02/2013
###########################################################

import os, sys
import osgeo.gdal as gdal
import numpy as np
import csv

inImageFile = sys.argv[1]
inGCPFile = sys.argv[2]
outGCPFile = sys.argv[3]

# Get information from image
dataset = gdal.Open(inImageFile, gdal.GA_ReadOnly )
projection = dataset.GetProjection()
geotransform = dataset.GetGeoTransform()
xSize = dataset.RasterXSize
ySize = dataset.RasterYSize

# Get geoinfo from image
minX = geotransform[0]
maxY = geotransform[3]
pixSizeX = geotransform[1]
pixSizeY = geotransform[5]
maxX = minX + (xSize * pixSizeX)
minY = maxY + (ySize * pixSizeY)

inGCPs = np.genfromtxt(inGCPFile, delimiter=',', comments='#')

floatXCoords = minX + (inGCPs[:,2] * pixSizeX) 
floatYCoords = maxY + (inGCPs[:,3] * pixSizeY) 

# Calculate differences
diffX = floatXCoords - inGCPs[:,0]
diffY = floatYCoords - inGCPs[:,1]

diffXPix = diffX / pixSizeX
diffYPix = diffY / pixSizeY

phaseDiffPix = np.arctan(diffYPix / diffXPix) * 180 / np.pi
powerDiffPix = np.sqrt((diffXPix + diffYPix)**2)

sqDiffX = (inGCPs[:,0] - floatXCoords)**2
sqDiffY = (inGCPs[:,1] - floatYCoords)**2

rmseX = np.sqrt(np.average(sqDiffX))
rmseY = np.sqrt(np.average(sqDiffY))

print 'RMSE (map units): x', rmseX, ', y', rmseY
print 'RMSE (pixels): x', rmseX / pixSizeX, ', y', rmseY / np.abs(pixSizeY)



# Write data out to CSV file
outGCPs = csv.writer(open(outGCPFile,'w'))

outGCPs.writerow(['baseE','baseN','floatE','floatN','diffE','diffN','diffXPix','diffYPix','powerPixDiff','phasePixDiff'])

for i in range(inGCPs.shape[0]):
    outGCPs.writerow([inGCPs[i,0],inGCPs[i,1],floatXCoords[i], floatYCoords[i], diffX[i], diffY[i], diffXPix[i],diffYPix[i], powerDiffPix[i], phaseDiffPix[i]])




