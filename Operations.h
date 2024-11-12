#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "ColorPair.h"

namespace TelCoColorCoder {
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    std::ostringstream PrintColorPairs();
}

#endif