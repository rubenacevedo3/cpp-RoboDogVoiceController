/**
 *@author Ruben Acevedo
 *@file motionModuleStub.cpp
 *@brief This is the ".cpp" file for the motionModuleStub Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file implements the methods and attributes of the
 * motionModuleStub Class. It is important to note that
 * this is only the stub of the real motionModule Class needed
 * to present the capabilities of the VoiceController Component.
 * The real motionModule Class will need to be integrated
 * with the VoiceController component in the future.
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
#include <iostream>
#include <string>

  //! Executes a motion function
  /**
   * This function simulates the execution of the motion given
   * a command. It will print "**<inset motion here>**" stating that
   * the given motion is being done by the RoboDog Platform
   *@param a constant string reference representing the command name
   *@return a string that says the action that was done
   */
std::string motionModuleStub::executeMotion(const std::string& cmdname) {
  std::string action;

  if (cmdname == "walk") {
    action = "**RoboDog walks**";
  } else if (cmdname == "turn right") {
    action = "**RoboDog turns right**";
  } else if (cmdname == "turn left") {
    action = "**RoboDog turns left**";
  } else if (cmdname == "stop") {
    action = "**RoboDog stops moving**";
  } else if (cmdname == "sit") {
    action = "**RoboDog sits**";
  } else if (cmdname == "lie down") {
    action = "**RoboDog lies down**";
  } else if (cmdname == "chase tail") {
    action = "**RoboDog chases its tail**";
  } else {
    action = "**RoboDog does nothing**";
  }

  std::cout << action << std::endl;
  return action;
}
