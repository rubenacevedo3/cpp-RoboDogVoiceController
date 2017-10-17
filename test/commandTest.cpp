/**
 *@author Ruben Acevedo
 *@file commandTest.cpp
 *@brief This is the ".cpp" file for testing the command Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file tests the command Class using google test
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
#include <command.hpp>
#include <gtest/gtest.h>

//! test the class constructor audioString setting
/**
 * This tests to make sure that when the class is created
 * the audioString is set to "!@#$%". At the same time it
 * is also testing the getAudioString function.
 *
 */
TEST(commandTest, constructorAudioStringTest) {
  command c("walk");
  auto s = c.getAudioString();
  EXPECT_EQ("!@#$%", s);
}

//! test the class constructor commandName setting
/**
 * This tests to make sure that when the class is created
 * the commandName is set to whatever the action string
 * is that was inputed in the constructor argument. At the
 * same time it is also testing the getCommandName function.
 *
 */
TEST(commandTest, constructorCommandNameTest) {
  command c("walk");
  auto s = c.getCommandName();
  EXPECT_EQ("walk", s);
}

//! test the setAudioString function
/**
 * This tests to make sure that when the audioString is being set
 * it is actually being saved in the class' audioString.
 *
 */
TEST(commandTest, setAudioStringTest) {
  command c("lie down");
  auto as = "RoboDog play dead";
  c.setAudioString(as);
  auto s = c.getAudioString();
  EXPECT_EQ(as, s);
}

//! test to make sure the commandName does not ever change
/**
 * This tests to make sure that when when any function is called
 * the commandName will always stay the same.
 *
 */
TEST(commandTest, noChangeCommandNameTest) {
  command c("chase tail");
  auto st = c.getAudioString();
  auto as = "RoboDog play dead";
  c.setAudioString(as);
  auto s = c.getAudioString();
  auto cmd = c.getCommandName();
  EXPECT_EQ("chase tail", cmd);
}
