SPDPointsViewerColourTable* createColourTabHardCandy()
{
    float rgbVals[256][3] = {
        {4,51,116},
        {4,51,116},
        {5,58,105},
        {7,65,94},
        {9,72,84},
        {11,79,74},
        {12,85,64},
        {14,92,55},
        {15,99,46},
        {16,105,38},
        {17,111,30},
        {17,117,24},
        {18,124,18},
        {18,129,12},
        {18,135,8},
        {17,141,5},
        {16,146,2},
        {15,152,0},
        {14,157,0},
        {13,162,0},
        {11,167,1},
        {13,171,3},
        {8,176,6},
        {5,180,13},
        {3,184,14},
        {1,188,20},
        {0,191,26},
        {3,195,33},
        {5,198,41},
        {7,201,50},
        {13,203,59},
        {12,206,68},
        {13,208,78},
        {15,210,88},
        {17,212,99},
        {18,213,109},
        {19,214,120},
        {19,215,131},
        {19,216,142},
        {19,216,153},
        {19,216,163},
        {18,216,174},
        {16,216,184},
        {14,215,193},
        {12,215,202},
        {9,213,211},
        {5,212,218},
        {2,210,226},
        {2,209,232},
        {6,206,238},
        {11,204,243},
        {17,201,247},
        {23,199,250},
        {29,195,252},
        {36,192,253},
        {42,189,253},
        {49,185,253},
        {56,181,251},
        {64,177,249},
        {71,172,246},
        {78,168,241},
        {85,163,236},
        {93,158,230},
        {100,153,224},
        {106,148,216},
        {113,142,208},
        {119,137,200},
        {125,131,190},
        {130,125,181},
        {135,119,171},
        {139,113,160},
        {143,106,150},
        {146,100,139},
        {149,93,128},
        {150,87,117},
        {151,80,106},
        {152,73,96},
        {151,67,85},
        {150,60,75},
        {148,53,65},
        {145,46,56},
        {142,39,47},
        {138,32,39},
        {133,25,31},
        {127,18,24},
        {121,11,18},
        {114,4,13},
        {107,2,9},
        {99,9,5},
        {90,16,2},
        {82,22,0},
        {73,29,0},
        {63,36,0},
        {54,42,1},
        {44,49,3},
        {35,55,5},
        {25,61,9},
        {16,68,14},
        {6,74,19},
        {1,79,25},
        {13,85,32},
        {18,91,40},
        {25,96,48},
        {32,101,57},
        {38,106,67},
        {44,111,76},
        {48,116,87},
        {52,120,97},
        {55,125,108},
        {56,129,119},
        {57,133,130},
        {57,136,140},
        {56,140,151},
        {53,143,162},
        {50,146,172},
        {45,149,182},
        {39,151,192},
        {33,153,201},
        {25,155,209},
        {16,157,217},
        {6,159,225},
        {3,160,231},
        {15,161,237},
        {27,162,242},
        {40,162,246},
        {53,162,249},
        {67,162,252},
        {81,162,253},
        {96,162,254},
        {111,161,253},
        {126,160,252},
        {141,159,249},
        {156,157,246},
        {170,155,242},
        {185,153,237},
        {199,151,231},
        {212,148,225},
        {225,146,217},
        {237,143,209},
        {248,139,201},
        {252,136,192},
        {242,132,182},
        {234,128,172},
        {227,124,162},
        {222,120,151},
        {217,115,140},
        {214,111,130},
        {212,106,119},
        {212,101,108},
        {213,95,97},
        {216,90,87},
        {220,84,76},
        {225,79,67},
        {232,73,57},
        {240,67,48},
        {249,61,40},
        {251,54,32},
        {239,48,25},
        {226,42,19},
        {213,35,14},
        {198,28,9},
        {183,22,5},
        {167,15,3},
        {150,8,1},
        {133,1,0},
        {116,5,0},
        {98,12,0},
        {81,19,2},
        {64,26,5},
        {47,33,9},
        {30,40,13},
        {14,47,18},
        {1,54,24},
        {15,61,31},
        {29,67,39},
        {42,74,47},
        {54,81,56},
        {64,88,65},
        {73,94,75},
        {81,101,85},
        {87,107,96},
        {91,113,106},
        {94,120,117},
        {95,126,128},
        {95,131,139},
        {92,137,150},
        {88,143,160},
        {82,148,171},
        {75,154,181},
        {66,159,190},
        {55,164,200},
        {42,168,208},
        {28,173,216},
        {13,177,224},
        {3,181,230},
        {21,185,236},
        {40,189,241},
        {60,193,246},
        {81,196,249},
        {103,199,251},
        {125,202,253},
        {147,204,253},
        {170,207,253},
        {193,209,252},
        {216,211,250},
        {239,212,247},
        {249,214,243},
        {228,215,238},
        {207,216,232},
        {187,216,226},
        {168,216,218},
        {151,216,211},
        {134,216,202},
        {119,216,193},
        {106,215,184},
        {95,214,174},
        {85,213,163},
        {77,212,153},
        {71,210,142},
        {67,208,131},
        {65,206,120},
        {66,203,109},
        {68,201,99},
        {72,198,88},
        {79,194,78},
        {87,191,68},
        {98,187,59},
        {110,184,50},
        {124,180,41},
        {140,175,33},
        {158,171,26},
        {177,166,20},
        {197,161,14},
        {219,156,13},
        {241,151,6},
        {245,146,3},
        {221,140,1},
        {196,135,0},
        {171,129,0},
        {145,123,0},
        {120,117,2},
        {95,111,5},
        {70,104,8},
        {46,98,12},
        {23,91,18},
        {1,85,24},
        {19,78,30},
        {39,71,38},
        {57,64,46},
        {74,57,55},
        {89,50,64},
        {102,44,74},
        {112,37,84},
        {121,30,94},
        {127,23,105},
        {127,23,105}};

    SPDPointsViewerColourTable *colourTab = new SPDPointsViewerColourTable();
    colourTab->setName("Hard Candy");
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
