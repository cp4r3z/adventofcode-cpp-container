#include "gtest/gtest.h"
#include "../src/solution01.h"

TEST(Solution01Tests, GetFuelRequirement)
{
  ASSERT_EQ(GetFuelRequirement(12), 2);
  ASSERT_EQ(GetFuelRequirement(14), 2);
  ASSERT_EQ(GetFuelRequirement(1969), 654);
  ASSERT_EQ(GetFuelRequirement(100756), 33583);
}