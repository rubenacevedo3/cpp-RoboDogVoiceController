/**
 *@author Ruben Acevedo
 *@file voiceControllerTest.cpp
 *@brief This is the ".cpp" file for testing the voiceController Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file tests the voiceController Class using google test
 *
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


