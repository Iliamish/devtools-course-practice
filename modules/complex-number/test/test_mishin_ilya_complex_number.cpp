// Copyright 2021 Mishin Ilya

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Mishin_Ilya_ComplexNumberTest, equalsZeroSubtraction) {
    ComplexNumber compx1;
    ComplexNumber compx2(1.25, 1.25);
    ComplexNumber compx3(2.27, 2.26);
    ComplexNumber compx4(-1.02, -1.01);

    compx1 = compx2 - compx3 - compx4;

    ASSERT_EQ(compx1, compx2 - compx3 - compx4);
}

TEST(Mishin_Ilya_ComplexNumberTest, equalsZeroMultiplication) {
    ComplexNumber compx1;
    ComplexNumber compx2(1.25, 1.25);
    ComplexNumber compx3(2.23, 2.24);
    ComplexNumber compx4;

    ASSERT_EQ(compx1, compx2 * compx3 * compx4);
}

TEST(Mishin_Ilya_ComplexNumberTest, equalsZeroDivision) {
    ComplexNumber compx1;
    ComplexNumber compx2;
    ComplexNumber compx3(1.25, 1.25);
    ComplexNumber compx4(1.23, 1.24);
    
    ASSERT_TRUE(compx1 / compx3 == compx2 / compx4);
}