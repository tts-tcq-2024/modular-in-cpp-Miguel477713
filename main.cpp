#include <iostream>
#include "Tests.h"
#include "Operations.h"

int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    
    std::string testStream =
        "Pair 1: White Blue\nPair 2: White Orange\nPair 3: White Green\nPair 4: White Brown\nPair 5: White Slate\n"
        "Pair 6: Red Blue\nPair 7: Red Orange\nPair 8: Red Green\nPair 9: Red Brown\nPair 10: Red Slate\n"
        "Pair 11: Black Blue\nPair 12: Black Orange\nPair 13: Black Green\nPair 14: Black Brown\nPair 15: Black Slate\n"
        "Pair 16: Yellow Blue\nPair 17: Yellow Orange\nPair 18: Yellow Green\nPair 19: Yellow Brown\nPair 20: Yellow Slate\n"
        "Pair 21: Violet Blue\nPair 22: Violet Orange\nPair 23: Violet Green\nPair 24: Violet Brown\nPair 25: Violet Slate\n";
    
    testPrintColorPairs(testStream);

    return 0;
}