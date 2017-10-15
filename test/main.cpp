/**
 *@author Ruben Acevedo
 *@file main.cpp
 *@brief This is the "main.cpp" file for running all the test
 *@copyright [2017] Ruben Acevedo
 *
 * This file runs all the google test of the code
 *
 */
#include <gtest/gtest.h>

  //! the main function
  /**
   * This function is the int main() that runs all the google test
   * of the code
   *@param an integer
   *@param a char**
   *@return an integer
   */
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
