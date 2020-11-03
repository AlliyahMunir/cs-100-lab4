#include "gtest/gtest.h"

#include "op_test.hpp"
#include "Mult_Test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
