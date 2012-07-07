SPDPointsViewerColourTable* createColourTabSteps()
{
    float rgbVals[256][3] = {
        {0,0,0},
        {0,42,0},
        {0,85,0},
        {0,127,0},
        {0,170,0},
        {0,212,0},
        {0,255,0},
        {0,246,0},
        {0,236,0},
        {0,226,0},
        {0,216,0},
        {0,206,0},
        {0,197,0},
        {0,187,0},
        {0,177,0},
        {0,167,0},
        {0,157,0},
        {0,148,0},
        {0,138,0},
        {0,128,0},
        {0,118,0},
        {0,108,0},
        {0,99,0},
        {0,89,0},
        {0,79,0},
        {0,69,0},
        {0,59,0},
        {0,50,0},
        {0,40,0},
        {0,30,0},
        {0,20,0},
        {0,10,0},
        {0,0,0},
        {0,0,8},
        {0,0,16},
        {0,0,24},
        {0,0,32},
        {0,0,41},
        {0,0,49},
        {0,0,57},
        {0,0,65},
        {0,0,74},
        {0,0,82},
        {0,0,90},
        {0,0,98},
        {0,0,106},
        {0,0,115},
        {0,0,123},
        {0,0,131},
        {0,0,139},
        {0,0,148},
        {0,0,156},
        {0,0,164},
        {0,0,172},
        {0,0,180},
        {0,0,189},
        {0,0,197},
        {0,0,205},
        {0,0,213},
        {0,0,222},
        {0,0,230},
        {0,0,238},
        {0,0,246},
        {0,0,255},
        {0,0,0},
        {7,0,5},
        {15,0,10},
        {23,0,15},
        {31,0,21},
        {39,0,26},
        {47,0,31},
        {55,0,37},
        {63,0,42},
        {70,0,47},
        {78,0,53},
        {86,0,58},
        {94,0,63},
        {102,0,69},
        {110,0,74},
        {118,0,79},
        {126,0,85},
        {134,0,89},
        {142,0,94},
        {151,0,98},
        {159,0,103},
        {168,0,108},
        {176,0,112},
        {184,0,117},
        {193,0,121},
        {201,0,126},
        {210,0,131},
        {218,0,135},
        {226,0,140},
        {235,0,144},
        {243,0,149},
        {252,0,154},
        {0,0,0},
        {1,0,0},
        {2,0,0},
        {3,0,0},
        {4,0,0},
        {5,0,0},
        {6,0,0},
        {7,0,0},
        {8,0,0},
        {9,0,0},
        {10,0,0},
        {11,0,0},
        {12,0,0},
        {14,0,0},
        {16,0,0},
        {18,0,0},
        {20,0,0},
        {23,0,0},
        {25,0,0},
        {27,0,0},
        {29,0,0},
        {32,0,0},
        {34,0,0},
        {36,0,0},
        {38,0,0},
        {41,0,0},
        {44,0,0},
        {47,0,0},
        {50,0,0},
        {53,0,0},
        {56,0,0},
        {59,0,0},
        {63,0,0},
        {66,0,0},
        {69,0,0},
        {72,0,0},
        {75,0,0},
        {78,0,0},
        {82,0,1},
        {85,0,1},
        {89,0,1},
        {93,0,1},
        {97,0,1},
        {101,0,1},
        {105,0,1},
        {108,0,1},
        {112,0,1},
        {116,0,1},
        {120,0,1},
        {124,0,1},
        {128,1,1},
        {131,1,1},
        {135,1,1},
        {139,1,1},
        {143,1,1},
        {147,1,1},
        {151,1,1},
        {155,1,1},
        {159,1,1},
        {163,1,1},
        {167,1,1},
        {171,1,1},
        {175,1,1},
        {178,1,1},
        {181,1,1},
        {185,1,1},
        {188,1,1},
        {192,1,1},
        {195,1,1},
        {198,1,1},
        {202,1,1},
        {205,1,1},
        {209,1,1},
        {212,1,1},
        {216,1,2},
        {218,1,2},
        {220,1,2},
        {223,1,2},
        {225,1,2},
        {227,1,2},
        {230,1,2},
        {232,1,2},
        {234,1,2},
        {237,1,2},
        {239,1,2},
        {241,1,2},
        {244,2,2},
        {244,2,2},
        {245,2,2},
        {246,2,2},
        {247,2,2},
        {247,2,2},
        {248,2,2},
        {249,2,2},
        {250,2,2},
        {250,2,2},
        {251,2,2},
        {252,2,2},
        {253,2,2},
        {254,1,2},
        {254,1,2},
        {254,3,2},
        {254,5,2},
        {254,8,2},
        {254,10,2},
        {254,12,2},
        {254,15,2},
        {254,17,2},
        {254,19,2},
        {254,22,2},
        {254,24,2},
        {254,26,2},
        {254,29,2},
        {254,31,2},
        {254,33,2},
        {254,36,2},
        {254,36,2},
        {254,38,3},
        {254,40,4},
        {254,42,5},
        {255,45,7},
        {255,48,9},
        {255,51,12},
        {255,54,14},
        {255,58,17},
        {255,61,20},
        {255,64,23},
        {255,67,27},
        {255,70,30},
        {255,73,34},
        {255,77,39},
        {255,82,44},
        {255,87,49},
        {255,92,55},
        {255,96,60},
        {255,100,65},
        {255,104,71},
        {255,108,76},
        {255,113,82},
        {255,119,89},
        {255,125,97},
        {255,131,104},
        {255,138,112},
        {255,144,120},
        {255,151,128},
        {255,157,136},
        {255,164,145},
        {255,171,153},
        {255,178,162},
        {255,185,171},
        {255,193,180},
        {255,200,189},
        {255,208,198},
        {255,215,207},
        {255,223,217},
        {255,229,224},
        {255,235,232},
        {255,242,239},
        {255,248,247},
        {255,255,255}};

    SPDPointsViewerColourTable *colourTab = new SPDPointsViewerColourTable();
    colourTab->setName("Steps");
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
