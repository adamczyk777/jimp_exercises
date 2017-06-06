//
// Created by mwypych on 01.06.17.
//
#include <gtest/gtest.h>
#include "ArabicRoman.h"

TEST(arabicToRomanTest, returnsCorrectInteger) {
    EXPECT_EQ("X", ArabicRoman::toRoman(10));
    EXPECT_EQ("IX", ArabicRoman::toRoman(9));
    EXPECT_EQ("CDXCIX", ArabicRoman::toRoman(499));
    EXPECT_EQ("CDLVII", ArabicRoman::toRoman(457));
    EXPECT_EQ("MCMXCVII", ArabicRoman::toRoman(1997));
}

TEST(arabicToRomanTest, returnsInvalidInteger) {
    EXPECT_NE("", ArabicRoman::toRoman(12));
}

TEST(arabicToRomanTest, returnsInvalidFormatString) { // TODO: DO EXCEPTIONS
    EXPECT_EQ("Invalid Roman Number Value", ArabicRoman::toRoman(-10));
    EXPECT_EQ("Invalid Roman Number Value", ArabicRoman::toRoman(9999999));
}