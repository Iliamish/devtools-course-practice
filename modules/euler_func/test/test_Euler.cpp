// Copyright 2021 Mishin Ilya

#include <gtest/gtest.h>

#include "include/Euler.h"

TEST(Mishin_Euler, AssertThrow) {
    ASSERT_ANY_THROW(phi(-1));
}

TEST(Mishin_Euler, Check_0) {
    ASSERT_EQ(0, phi(0));
}

TEST(Mishin_Euler, Check_1) {
    ASSERT_EQ(1, phi(1));
}

TEST(Mishin_Euler, Check_2) {
    ASSERT_EQ(1, phi(2));
}

TEST(Mishin_Euler, Check_3) {
    ASSERT_EQ(2, phi(3));
}

TEST(Mishin_Euler, Check_4) {
    ASSERT_EQ(2, phi(4));
}

TEST(Mishin_Euler, Check_5) {
    ASSERT_EQ(4, phi(5));
}

TEST(Mishin_Euler, Check_155) {
    ASSERT_EQ(120, phi(155));
}

TEST(Mishin_Euler, Check_multiplicativity) {
    ASSERT_EQ(phi(5)*phi(7), phi(5*7));
}

TEST(Mishin_Euler, Check_prime) {
    ASSERT_EQ(13 - 1, phi(13));
}

TEST(Mishin_Euler, Check_degree) {
    ASSERT_EQ(phi(17*17*17), 17*17*phi(17));
}
