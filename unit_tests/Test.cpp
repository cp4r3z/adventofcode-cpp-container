#include "gtest/gtest.h"
//#include "../src/someHeader.h"
#include "../src/solution01.h"

TEST(SomeTestSuite, SomeTest) {
  //MyType obj = new MyType();
  //obj->set_the_value(5);
  ASSERT_EQ(5, GetFuelRequirement(3));
}