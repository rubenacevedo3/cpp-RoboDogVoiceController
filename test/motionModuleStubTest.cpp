/**
 *@author Ruben Acevedo
 *@file motionModuleStubTest.cpp
 *@brief This is the ".cpp" file for testing the motionModuleStub Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file tests the motionModuleStub Class using google test
 *
 */
#include <motionModuleStub.hpp>
#include <gtest/gtest.h>
#include <string>

  //! test for walk
  /**
   * This test to make sure that when the walk command is entered
   * the robot walks
   *
   */
TEST(PIDControllerTest, walkTest) {
  motionModuleStub m;
  EXPECT_EQ("**RoboDog walks**", m.executeMotion("walk"));
}

//! test for turning right
/**
 * This test to make sure that when the turn right command is entered
 * the robot turns right
 *
 */
TEST(PIDControllerTest, turnRightTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog turns right**", m.executeMotion("turn right"));
}

//! test for turning left
/**
 * This test to make sure that when the turn left command is entered
 * the robot turns left
 *
 */
TEST(PIDControllerTest, turnLeftTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog turns left**", m.executeMotion("turn left"));
}

//! test for stopping
/**
 * This test to make sure that when the stop command is entered
 * the robot stops moving
 *
 */
TEST(PIDControllerTest, stopTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog stops moving**", m.executeMotion("stop"));
}

//! test for sitting
/**
 * This test to make sure that when the sit command is entered
 * the robot sits
 *
 */
TEST(PIDControllerTest, sitTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog sits**", m.executeMotion("sit"));
}

//! test for sitting
/**
 * This test to make sure that when the sit command is entered
 * the robot sits
 *
 */
TEST(PIDControllerTest, lieDownTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog lies down**", m.executeMotion("lie down"));
}

//! test for sitting
/**
 * This test to make sure that when the lie down command is entered
 * the robot lies down
 *
 */
TEST(PIDControllerTest, chaseTailTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog chases its tail**", m.executeMotion("chase tail"));
}

//! test for bad command
/**
 * This test to make sure that when a command is entered
 * incorrectly the robot does nothing
 *
 */
TEST(PIDControllerTest, badCommandTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog does nothing**", m.executeMotion("chase Tail"));
}
