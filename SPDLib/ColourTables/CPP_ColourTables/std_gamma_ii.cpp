SPDPointsViewerColourTable* createColourTabStdGamma()
{
    float rgbVals[256][3] = {
        {0,0,0},
        {0,0,5},
        {0,0,10},
        {0,0,15},
        {0,0,20},
        {0,0,26},
        {0,0,31},
        {0,0,36},
        {0,0,41},
        {0,0,46},
        {0,0,52},
        {0,0,57},
        {0,0,62},
        {0,0,67},
        {0,0,72},
        {0,0,78},
        {0,0,83},
        {0,0,88},
        {0,0,93},
        {0,0,98},
        {0,0,104},
        {0,0,109},
        {0,0,114},
        {0,0,119},
        {0,0,124},
        {0,0,130},
        {0,0,135},
        {0,0,140},
        {0,0,145},
        {0,0,150},
        {0,0,156},
        {0,0,161},
        {0,0,166},
        {0,0,171},
        {0,0,176},
        {0,0,182},
        {0,0,187},
        {0,0,192},
        {0,0,197},
        {0,0,202},
        {0,0,208},
        {0,0,213},
        {0,0,218},
        {0,0,223},
        {0,0,228},
        {0,0,234},
        {0,0,239},
        {0,0,244},
        {4,0,249},
        {9,0,255},
        {14,0,250},
        {19,0,245},
        {23,0,239},
        {28,0,234},
        {33,0,228},
        {38,0,223},
        {42,0,218},
        {47,0,212},
        {52,0,207},
        {57,0,201},
        {61,0,196},
        {66,0,190},
        {71,0,185},
        {76,0,180},
        {81,0,174},
        {81,0,169},
        {81,0,163},
        {81,0,158},
        {81,0,152},
        {81,0,147},
        {81,0,142},
        {81,0,136},
        {80,0,131},
        {80,0,125},
        {80,0,120},
        {80,0,114},
        {80,0,109},
        {80,0,104},
        {80,0,98},
        {79,0,93},
        {84,0,87},
        {89,0,82},
        {94,0,76},
        {99,0,71},
        {104,0,66},
        {109,0,60},
        {114,0,55},
        {119,0,49},
        {124,0,44},
        {129,0,38},
        {134,0,33},
        {139,0,28},
        {144,0,22},
        {149,0,17},
        {154,0,11},
        {159,0,6},
        {164,0,0},
        {169,0,0},
        {174,0,0},
        {180,0,0},
        {185,0,0},
        {190,0,0},
        {196,0,0},
        {201,0,0},
        {206,0,0},
        {212,0,0},
        {217,0,0},
        {222,0,0},
        {228,0,0},
        {233,0,0},
        {255,0,0},
        {255,0,0},
        {255,0,0},
        {255,0,0},
        {255,5,0},
        {255,10,0},
        {255,16,0},
        {255,21,0},
        {255,27,0},
        {255,32,0},
        {255,37,0},
        {255,43,0},
        {255,48,0},
        {255,54,0},
        {255,59,0},
        {255,64,0},
        {255,70,0},
        {255,75,0},
        {255,81,0},
        {255,85,4},
        {255,90,9},
        {255,95,14},
        {255,100,19},
        {255,105,24},
        {255,109,28},
        {255,114,33},
        {255,119,38},
        {255,124,43},
        {255,129,48},
        {255,134,53},
        {255,138,57},
        {255,143,62},
        {255,148,67},
        {255,153,72},
        {255,158,77},
        {255,163,82},
        {255,163,77},
        {255,163,71},
        {255,163,65},
        {255,163,59},
        {255,163,53},
        {255,163,47},
        {255,163,41},
        {255,163,36},
        {255,163,30},
        {255,163,24},
        {255,163,18},
        {255,163,12},
        {255,163,6},
        {255,163,0},
        {255,163,0},
        {255,163,0},
        {255,163,0},
        {248,163,0},
        {240,163,0},
        {232,163,0},
        {225,163,0},
        {217,163,0},
        {209,163,0},
        {202,163,0},
        {194,163,0},
        {186,163,0},
        {179,163,0},
        {171,163,0},
        {163,163,0},
        {168,163,0},
        {173,163,0},
        {178,169,3},
        {183,175,6},
        {188,181,9},
        {193,187,12},
        {198,193,16},
        {203,199,19},
        {209,205,22},
        {214,212,25},
        {219,218,29},
        {224,224,32},
        {229,230,35},
        {234,236,38},
        {239,242,41},
        {244,248,45},
        {249,255,48},
        {255,255,51},
        {255,255,54},
        {255,255,58},
        {255,255,61},
        {255,255,64},
        {255,255,67},
        {255,255,71},
        {255,255,74},
        {255,255,77},
        {255,255,80},
        {255,255,83},
        {255,255,87},
        {255,255,90},
        {255,255,93},
        {255,255,96},
        {255,255,100},
        {255,255,103},
        {255,255,106},
        {255,255,109},
        {255,255,112},
        {255,255,116},
        {255,255,119},
        {255,255,122},
        {255,255,125},
        {255,255,129},
        {255,255,132},
        {255,255,135},
        {255,255,138},
        {255,255,142},
        {255,255,145},
        {255,255,148},
        {255,255,151},
        {255,255,154},
        {255,255,158},
        {255,255,161},
        {255,255,164},
        {255,255,167},
        {255,255,171},
        {255,255,174},
        {255,255,177},
        {255,255,180},
        {255,255,183},
        {255,255,187},
        {255,255,190},
        {255,255,193},
        {255,255,196},
        {255,255,200},
        {255,255,203},
        {255,255,206},
        {255,255,209},
        {255,255,213},
        {255,255,216},
        {255,255,219},
        {255,255,222},
        {255,255,225},
        {255,255,229},
        {255,255,232},
        {255,255,235},
        {255,255,238},
        {255,255,242},
        {255,255,245},
        {255,255,248},
        {255,255,251},
        {255,255,255}};

    SPDPointsViewerColourTable *colourTab = new SPDPointsViewerColourTable();
    colourTab->setName("Standard Gamma");
    for(unsigned int i = 0; i < 256; ++i)
    {
        ClrVals clrVal;
        clrVal.val = i;
        clrVal.red = rgbVals[i][0]/255;
        clrVal.green = rgbVals[i][1]/255;
        clrVal.blue = rgbVals[i][2]/255;
        colourTab->addColorValPair(clrVal);
    }
    return colourTab;
};
