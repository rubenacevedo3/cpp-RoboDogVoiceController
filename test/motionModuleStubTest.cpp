/**
 *@author Ruben Acevedo
 *@file motionModuleStubTest.cpp
 *@brief This is the ".cpp" file for testing the motionModuleStub Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file tests the motionModuleStub Class using google test
 *
 */
/**
 * MIT License
 *
 * Copyright 2017 Ruben Acevedo
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without
 * limitation the rights to use, copy, modify, merge, publish, distribute,
 * sublicense, and/or sell copies of the Software, and to permit persons to
 * whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software. THE SOFTWARE IS
 * PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE. © 2017 GitHub, Inc.
 */
#include <motionModuleStub.hpp>
#include <gtest/gtest.h>

//! test for walk
/**
 * This tests to make sure that when the walk command is entered
 * the robot walks
 *
 */
TEST(motionModuleStubTest, walkTest) {
  motionModuleStub m;
  EXPECT_EQ("**RoboDog walks**", m.executeMotion("walk"));
}

//! test for turning right
/**
 * This tests to make sure that when the turn right command is entered
 * the robot turns right
 *
 */
TEST(motionModuleStubTest, turnRightTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog turns right**", m.executeMotion("turn right"));
}

//! test for turning left
/**
 * This tests to make sure that when the turn left command is entered
 * the robot turns left
 *
 */
TEST(motionModuleStubTest, turnLeftTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog turns left**", m.executeMotion("turn left"));
}

//! test for stopping
/**
 * This tests to make sure that when the stop command is entered
 * the robot stops moving
 *
 */
TEST(motionModuleStubTest, stopTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog stops moving**", m.executeMotion("stop"));
}

//! test for sitting
/**
 * This tests to make sure that when the sit command is entered
 * the robot sits
 *
 */
TEST(motionModuleStubTest, sitTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog sits**", m.executeMotion("sit"));
}

//! test for sitting
/**
 * This tests to make sure that when the sit command is entered
 * the robot sits
 *
 */
TEST(motionModuleStubTest, lieDownTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog lies down**", m.executeMotion("lie down"));
}

//! test for sitting
/**
 * This tests to make sure that when the lie down command is entered
 * the robot lies down
 *
 */
TEST(motionModuleStubTest, chaseTailTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog chases its tail**", m.executeMotion("chase tail"));
}

//! test for bad command
/**
 * This tests to make sure that when a command is entered
 * incorrectly the robot does nothing
 *
 */
TEST(motionModuleStubTest, badCommandTest) {
motionModuleStub m;
EXPECT_EQ("**RoboDog does nothing**", m.executeMotion("chase Tail"));
}
