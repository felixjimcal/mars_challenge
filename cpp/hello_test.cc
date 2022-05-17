#include <gtest/gtest.h>
#include "simplemath.cpp"

namespace {
// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect equality.
  EXPECT_EQ(1000, simplemath::cubic(10));
}
}
