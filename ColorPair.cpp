#include "ColorPair.h"

namespace TelCoColorCoder {

    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    const int totalPairColors = (numberOfMajorColors - 1) * numberOfMinorColors + numberOfMinorColors;
    
    MajorColor ColorPair::getMajor() {
        return majorColor;
    }
    
    MinorColor ColorPair::getMinor() {
        return minorColor;
    } 
    
    ColorPair::ColorPair(MajorColor major, MinorColor minor):
        majorColor(major), minorColor(minor) {
    }
    
    std::string ColorPair::ToString() {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }
}