#include "gtest/gtest.h"
#include "Fibonacci.h"

TEST(fibTest, test1) {
    EXPECT_EQ (Fibonacci::fib(0),  0);
    EXPECT_EQ (Fibonacci::fib(10), 0);
    EXPECT_EQ (Fibonacci::fib(50), 0);
}