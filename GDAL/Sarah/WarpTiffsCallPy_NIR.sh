# Created by Pete Bunting (petebunting@mac.com)
#
# A simple script to run GDAL Warp on a set of input images (tifs).
# This script is to be used when a transformation is specified in 
# the image header and the file needs to be warped to apply the 
# transformation.
#

# Inputs:
# $1 is the input directory 
# $2 is the output directory

FILES=./NIR_GeoTiff/*.tif
for f in $FILES
do
  echo "Processing $f file..."
  filename=`basename ${f} .tif`
  echo "Output: ./NIR_GeoTiff_Out/${filename}_warp.tif"
  python ./CheckWarpTiffs.py -i ${f} -o ${filename}_warp.tif -d ./NIR_GeoTiff_Out
done