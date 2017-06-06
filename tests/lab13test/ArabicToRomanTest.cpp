//
// Created by mwypych on 01.06.17.
//
#include <gtest/gtest.h>
#include "ArabicRoman.h"

TEST(arabicToRomanTest, returnsCorrectInteger){
    EXPECT_EQ("X", ArabicRoman::toRoman(10));
    EXPECT_EQ("IX", ArabicRoman::toRoman(9));
    EXPECT_EQ("ID", ArabicRoman::toRoman(499));
    EXPECT_EQ("LDVII", ArabicRoman::toRoman(457));
    EXPECT_EQ("MCMXCVII", ArabicRoman::toRoman(1997));
}