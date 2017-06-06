//
// Created by mwypych on 01.06.17.
//
#include <gtest/gtest.h>
#include "ArabicRoman.h"

TEST(romanToArabicTest, stringReturnedIsValidRomanNumeral) {
    EXPECT_EQ(1508, ArabicRoman::ToArabic("MDVIII"));
    EXPECT_EQ(5, ArabicRoman::ToArabic("V"));
    EXPECT_EQ(10, ArabicRoman::ToArabic("X"));
    EXPECT_EQ(1900, ArabicRoman::ToArabic("MCM"));
    EXPECT_EQ(99, ArabicRoman::ToArabic("XCIX"));

}