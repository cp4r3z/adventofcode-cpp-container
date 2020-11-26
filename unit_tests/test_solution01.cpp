#include "gtest/gtest.h"
#include "../src/solution01.h"

TEST(Solution01Tests, GetFuelRequirement) {
  ASSERT_EQ(5, GetFuelRequirement(4));
}