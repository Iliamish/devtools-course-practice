// Copyright 2021 Mishin Ilya

#include <cstdint>

#include "include/Euler.h"

int64_t phi(int64_t n) {
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        throw(1);
    }
    int64_t result = n;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    if (n > 1)
        result -= result / n;
    return result;
}
