#! /bin/csh
#
# Script to convert JAXA 1.1 data to GAMMA SLC
#
# Created by Joao M. B. Carreiras (IG&ES/AU and IICT).
# Copyright 2012 Joao M. B. Carreiras. All rights reserved.
#
# Permission is hereby granted, free of charge, to any person 
# obtaining a copy of this software and associated documentation 
# files (the "Software"), to deal in the Software without restriction, 
# including without limitation the rights to use, copy, modify, 
# merge, publish, distribute, sublicense, and/or sell copies of the 
# Software, and to permit persons to whom the Software is furnished 
# to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be 
# included in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
# OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
# IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR 
# ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF 
# CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION 
# WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#
# Modified by Dan Clewley 05/01/11 as template for BatchGamma.py
#

# Create the SLC and ISP parameter file in MSP format.
par_EORC_PALSAR LEDFILENAME temp.hh.slc.par HHFILENAME temp.hh.slc
par_EORC_PALSAR LEDFILENAME temp.hv.slc.par HVFILENAME temp.hv.slc
par_EORC_PALSAR LEDFILENAME temp.vv.slc.par VVFILENAME temp.vv.slc
par_EORC_PALSAR LEDFILENAME temp.vh.slc.par VVFILENAME temp.vh.slc
#
# Calibrate the SLCs. Since the SLCs are already corrected for antenna pattern, we only need to correct for
# the absolute calibration factor. For level 1.1 data processed by JAXA after January 9, 2009, the absolute 
# calibration factor is -115.0 dB.
radcal_SLC temp.hh.slc temp.hh.slc.par SCENENAME.hh.slc SCENENAME.hh.slc.par 1 - 0 0 1 0 -115.0
radcal_SLC temp.hv.slc temp.hv.slc.par SCENENAME.hv.slc SCENENAME.hv.slc.par 1 - 0 0 1 0 -115.0
radcal_SLC temp.vv.slc temp.vv.slc.par SCENENAME.vv.slc SCENENAME.vv.slc.par 1 - 0 0 1 0 -115.0
radcal_SLC temp.vh.slc temp.vh.slc.par SCENENAME.vh.slc SCENENAME.vh.slc.par 1 - 0 0 1 0 -115.0

# Generate a file with the SLC extents.
SLC_corners SCENENAME.hh.slc.par > SCENENAME.hh.slc.corners
SLC_corners SCENENAME.hv.slc.par > SCENENAME.hv.slc.corners
SLC_corners SCENENAME.vv.slc.par > SCENENAME.vv.slc.corners
SLC_corners SCENENAME.vh.slc.par > SCENENAME.vh.slc.corners