#ifndef TESTS_H
#define TESTS_H

#include "ColorPair.h"
#include <sstream>

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber);
    
void testPrintColorPairs(std::string& testString);
    
#endif