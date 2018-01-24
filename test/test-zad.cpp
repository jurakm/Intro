#include "gtest/gtest.h"
#include "../src/zadatak.h"
 
#include <cmath>

using namespace std;

TEST(INTRO, Zadatak) {
    auto P = zadatak(1.0);
	
    ASSERT_DOUBLE_EQ (P, M_PI);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
