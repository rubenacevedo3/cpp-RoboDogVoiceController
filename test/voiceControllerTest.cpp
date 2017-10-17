/**
 *@author Ruben Acevedo
 *@file voiceControllerTest.cpp
 *@brief This is the ".cpp" file for testing the voiceController Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file tests the voiceController Class using google test
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
#include <voiceController.hpp>
#include <gtest/gtest.h>


//! test the class constructor for 7 elements in the commandList
/**
 * This tests to make sure that when the class is created
 * the commandList has 7 elements. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, constructorCommandListSizeTest) {
  voiceController v;
  auto cl = v.seeCommandList();
  EXPECT_EQ(7, cl.size());
}

//! test the class constructor for the walk command
/**
 * This tests to make sure that when the class is created
 * the walk command is in the commandList. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, constructorWalkCommandTest) {
  voiceController v;
  auto cl = v.seeCommandList();
  EXPECT_EQ("walk", cl[0].getCommandName());
}

//! test the class constructor for making the turn right command
/**
 * This tests to make sure that when the class is created
 * the turn right command is in the commandList. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, constructorTurnRightCommandTest) {
  voiceController v;
  auto cl = v.seeCommandList();
  EXPECT_EQ("turn right", cl[1].getCommandName());
}

//! test the class constructor for making the turn left command
/**
 * This tests to make sure that when the class is created
 * the turn left command is in the commandList. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, constructorTurnLeftCommandTest) {
  voiceController v;
  auto cl = v.seeCommandList();
  EXPECT_EQ("turn left", cl[2].getCommandName());
}

//! test the class constructor for making the stop command
/**
 * This tests to make sure that when the class is created
 * the stop command is in the commandList. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, constructorStopCommandTest) {
  voiceController v;
  auto cl = v.seeCommandList();
  EXPECT_EQ("stop", cl[3].getCommandName());
}

//! test the class constructor for making the sit command
/**
 * This tests to make sure that when the class is created
 * the sit command is in the commandList. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, constructorSitCommandTest) {
  voiceController v;
  auto cl = v.seeCommandList();
  EXPECT_EQ("sit", cl[4].getCommandName());
}

//! test the class constructor for making the lie down command
/**
 * This tests to make sure that when the class is created
 * the lie down command is in the commandList. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, constructorLieDownCommandTest) {
  voiceController v;
  auto cl = v.seeCommandList();
  EXPECT_EQ("lie down", cl[5].getCommandName());
}

//! test the class constructor for making the chase tail command
/**
 * This tests to make sure that when the class is created
 * the chase tail command is in the commandList. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, constructorChaseTailCommandTest) {
  voiceController v;
  auto cl = v.seeCommandList();
  EXPECT_EQ("chase tail", cl[6].getCommandName());
}

//! test the train function given right command name
/**
 * This tests to make sure that the train function works
 * correctly given a right command name. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, rightCommandTrainTest) {
  voiceController v;
  EXPECT_TRUE(v.train("walk", "mush"));
  auto cl = v.seeCommandList();
  EXPECT_EQ("mush", cl[0].getAudioString());
}

//! test the train function given wrong command name
/**
 * This tests to make sure that the train function works
 * correctly given a wrong command name. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, wrongCommandTrainTest) {
  voiceController v;
  EXPECT_FALSE(v.train("walks", "mush"));
  auto cl = v.seeCommandList();
  EXPECT_EQ("!@#$%", cl[0].getAudioString());
}

//! test the matchCommand function given right signal
/**
 * This tests to make sure that the commandMatch function
 * works correctly given a signal that contains one of the command's
 * audio string in it. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, rightCommandMatchCommandTest) {
  voiceController v;
  v.train("walk", "mush");
  EXPECT_TRUE(v.matchCommand("mush RoboDog"));
}

//! test the matchCommand function given wrong signal
/**
 * This tests to make sure that the commandMatch function
 * works correctly given a signal that does not contains
 * one of the command's audio string in it. It also tests the
 * seeCommand function in parallel as a result.
 */
TEST(voiceControllerTest, wrongCommandMatchCommandTest) {
  voiceController v;
  v.train("walk", "mush");
  EXPECT_FALSE(v.matchCommand("RoboDog walk"));
}


