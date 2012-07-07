 #! /usr/bin/env python

#######################################
# A python script to plot the averaged
# columns data.
#
# Email: petebunting@mac.com
# Date: 01/02/2012
# Version: 1.0
#######################################

import os.path
import sys
from datetime import datetime,timedelta
from math import *
import optparse
import matplotlib.pyplot as plt
import matplotlib.dates as matdate

class PlotAverageData (object):

    def readCSVFile(self, inFile, minList, maxList, meanList, medianList, stddevList, meanSDP1List, meanSDM1List):
        line = 0
        mean = 0
        stddev = 0
        for eachLine in inFile:
            eachLine = eachLine.strip()
            if eachLine != "":
                split = eachLine.split(',', eachLine.count(','))
                if line == 0:
                    minList.append(float(split[1]))
                if line == 1:
                    maxList.append(float(split[1]))
                if line == 2:
                    mean = float(split[1])
                    meanList.append(mean)
                if line == 3:
                    stddev = float(split[1])
                    stddevList.append(stddev)
                    meanSDP1List.append(mean+stddev)
                    meanSDM1List.append(mean-stddev)
                if line == 5:
                    medianList.append(float(split[1]))
                line = line + 1


    def plotData(self, outputFile, titleText, xLabelText, yLabelText, yVals, minList, maxList, meanList, medianList, meanSDP1List, meanSDM1List, plotMean, plotMedian, plotStdDev, plotRange):
        fig = plt.figure(figsize=(15, 10), dpi=120)
        ax = fig.add_subplot(111)

        if plotMean:
            ax.plot(yVals, meanList, 'k-', label='Mean', zorder=10)
        if plotMedian:
            if plotMean:
                ax.plot(yVals, medianList, 'k--', label='Median', zorder=9)
            else:
                ax.plot(yVals, medianList, 'k-', label='Median', zorder=10)
        if plotRange:
            ax.fill_between(yVals, minList, maxList, alpha=0.2, linewidth=1.0, facecolor='b', edgecolor=[0.70,0.70,0.70], label='Range', zorder=-1)
        if plotStdDev:
            ax.fill_between(yVals, meanSDP1List, meanSDM1List, alpha=0.4, linewidth=1.0, facecolor='g', edgecolor=[0.70,0.70,0.70], label='1 Std Dev', zorder=1)

        axRange = plt.axis('tight')

        plt.grid(color='k', linestyle='--', linewidth=0.5)
        plt.title(titleText)
        plt.xlabel(xLabelText)
        plt.ylabel(yLabelText)

        plt.savefig(outputFile, format='PDF')

    def run(self, cmdargs):
        yDataValsList = list()
        minList = list()
        maxList = list()
        meanList = list()
        medianList = list()
        stddevList = list()
        meanSDP1List = list()
        meanSDM1List = list()

        for strVal in cmdargs.yDataStrVals:
            yDataValsList.append(float(strVal.strip()))

        for fileName in cmdargs.inputs:
            try:
                inputTextFile = open(fileName.strip(), 'r')
                self.readCSVFile(inputTextFile, minList, maxList, meanList, medianList, stddevList, meanSDP1List, meanSDM1List)
                inputTextFile.close()
            except IOError, e:
                print '\nCould not open file:\n', e
                return

        if len(minList) != len(yDataValsList):
            print "Y data values not the same len as min vals."
            return

        if len(maxList) != len(yDataValsList):
            print "Y data values not the same len as max vals."
            return

        if len(meanList) != len(yDataValsList):
            print "Y data values not the same len as mean vals."
            return

        if len(medianList) != len(yDataValsList):
            print "Y data values not the same len as median vals."
            return

        if len(stddevList) != len(yDataValsList):
            print "Y data values not the same len as Std Dev vals."
            return

        if len(meanSDP1List) != len(yDataValsList):
            print "Y data values not the same len as plus 1 std dev vals."
            return

        if len(meanSDM1List) != len(yDataValsList):
            print "Y data values not the same len as minus 1 std dev vals."
            return
        
        meanSDM1ListMinZero = list()
        for val in meanSDM1List:
            if val < 0:
                val = 0
            meanSDM1ListMinZero.append(val)
        
        self.plotData(cmdargs.outputFile, cmdargs.title, cmdargs.xAxis, cmdargs.yAxis, yDataValsList, minList, maxList, meanList, medianList, meanSDP1List, meanSDM1ListMinZero, cmdargs.mean, cmdargs.median, cmdargs.stddev, cmdargs.range)


# Command arguments
class CmdArgs:
  def __init__(self):
    p = optparse.OptionParser()
    p.add_option("-o","--output", dest="outputFile", default=None, help="Output PDF file.")
    p.add_option("-t","--title", dest="title", default="Title", help="Plot title.")
    p.add_option("-x","--xaxis", dest="xAxis", default="X Axis", help="Plot x-axis label.")
    p.add_option("-y","--yaxis", dest="yAxis", default="Y Axis", help="Plot y-axis label.")
    p.add_option("", "--mean", action="store_true", dest="mean", default=False, help="Plot mean values")
    p.add_option("", "--median", action="store_true", dest="median", default=False, help="Plot median values")
    p.add_option("", "--stddev", action="store_true", dest="stddev", default=False, help="Plot standard deviation values")
    p.add_option("", "--range", action="store_true", dest="range", default=False, help="Plot range values")
    p.add_option("-i","--input", action="append", dest="inputs", default=None, help="Input files in order they will be plotted.")
    p.add_option("-d","--yData", action="append", dest="yDataStrVals", default=None, help="Values for along the y-axis.")



    (options, args) = p.parse_args()
    self.__dict__.update(options.__dict__)

    if self.outputFile is None:
        p.print_help()
        print "output filename must be set."
        sys.exit()


if __name__ == '__main__':
    cmdargs = CmdArgs()
    obj = PlotAverageData()
    obj.run(cmdargs)
