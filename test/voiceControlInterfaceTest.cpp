/**
 *@author Ruben Acevedo
 *@file voiceControlInterfaceTest.cpp
 *@brief This is the ".cpp" file for testing the voiceControlInterface Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file tests the voiceControlInterface Class using google test
 *
 */
#include <voiceControlInterface.hpp>
#include <gtest/gtest.h>


//! test the class constructor sets on bool false
/**
 * This tests to make sure that when the class is created
 * the on bool is set to false. This also test the
 * isOn() bool function as a result.
 */
TEST(voiceControlInterfaceTest, constructorTest) {
  voiceControlInterface vci;
  EXPECT_FALSE(vci.isOn());
}

//! test the turn on function
/**
 * This tests to make sure the function turns the on bool
 * to true and it outputs to the user the correct phrase
 */
TEST(voiceControlInterfaceTest, turnOnTest) {
  voiceControlInterface vci;
  EXPECT_EQ("RoboDog Voice Control Interface is on",vci.turnOn());
  EXPECT_TRUE(vci.isOn());
  EXPECT_EQ("",vci.turnOn());
}

//! test the turn off function
/**
 * This tests to make sure the function turns the on bool
 * to false and it outputs to the user the correct phrase
 */
TEST(voiceControlInterfaceTest, turnOffTest) {
  voiceControlInterface vci;
  vci.turnOn();
  EXPECT_EQ("RoboDog Voice Control Interface is off",vci.turnOff());
  EXPECT_FALSE(vci.isOn());
  EXPECT_EQ("",vci.turnOff());
}

//! test the listen function
/**
 * This tests to make sure that the listen function only works
 * when the interface is turned on.
 */
TEST(voiceControlInterfaceTest, listenTest) {
  voiceControlInterface vci;
  EXPECT_FALSE (vci.listen(true));
  vci.turnOn();
  EXPECT_TRUE(vci.listen(true));
}

//! test the train function
/**
 * This tests to make sure that the train function only works
 * when the interface is turned on.
 */
TEST(voiceControlInterfaceTest, trainModeTest) {
  voiceControlInterface vci;
  EXPECT_FALSE (vci.trainMode(true));
  vci.turnOn();
  EXPECT_TRUE(vci.trainMode(true));
}
