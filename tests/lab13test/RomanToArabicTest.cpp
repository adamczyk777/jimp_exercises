//
// Created by mwypych on 01.06.17.
//
#include <gtest/gtest.h>
#include "ArabicRoman.h"

TEST(romanToArabicTest, stringReturnedIsValidRomanNumeral) {
    EXPECT_EQ(1508, ArabicRoman::toArabic("MDVIII"));
    EXPECT_EQ(5, ArabicRoman::toArabic("V"));
    EXPECT_EQ(10, ArabicRoman::toArabic("X"));
    EXPECT_EQ(1900, ArabicRoman::toArabic("MCM"));
    EXPECT_EQ(99, ArabicRoman::toArabic("XCIX"));

}