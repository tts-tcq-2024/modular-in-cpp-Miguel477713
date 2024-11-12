#include "Operations.h"
#include <iostream>
#include <sstream>

namespace TelCoColorCoder {
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        
        MajorColor majorColor = (MajorColor) (zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor) (zeroBasedPairNumber % numberOfMinorColors);
    
        return ColorPair(majorColor, minorColor);
    }
    
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
    
    
    std::ostringstream PrintColorPairs() {
        std::ostringstream stringStream;
        int oneBasedPairNumber = 0;
        
        for(int index = 0; index < totalPairColors; index++) {
            oneBasedPairNumber = index + 1;
            ColorPair colorPair = GetColorFromPairNumber(oneBasedPairNumber);
            stringStream << "Pair " << oneBasedPairNumber << ": " << colorPair.ToString() << std::endl;
        }
        
        return stringStream;
    }
}