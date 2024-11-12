#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include <iostream>

namespace TelCoColorCoder {
    extern int numberOfMajorColors;
    extern int numberOfMinorColors;
    extern const int totalPairColors;
    
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor);
            MajorColor getMajor();
            MinorColor getMinor();
            std::string ToString();
    };
}

#endif