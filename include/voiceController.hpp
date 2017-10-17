/**
 *@author Ruben Acevedo
 *@file voiceController.hpp
 *@brief This is the ".hpp" file for the voiceController Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file will define the methods and attributes of the
 * voiceController Class
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

#ifndef include_voiceController_hpp_
#define include_voiceController_hpp_

#include <motionModuleStub.hpp>
#include <command.hpp>
#include <string>
#include <vector>

//! A voiceController Class
/**
 * This class is the root of the Voice Controller component.
 * Its purpose is to match the audio signals from the microphone
 * and translate it to commands it can send to the motionModule.
 * This class stores all the commands that it can send to the
 * motionModule and their respective trained audio signals
 */
class voiceController {
  //! Public Methods
 public:
  //! Class Constructor
  /**
   * This code constructs the class.
   * It initializes the commandList vector with commands that
   * have the appropriate commandNames that can be sent to
   * the RoboDog MotionModule. The 7 commands that the robot can do are
   * walk, turn right, turn left, stop, sit, lie down,
   * and chase tail. It does not however assign
   * as audioString to the command names.
   * @param nothing
   * @return nothing
   */
  voiceController();

  //! match the command function
  /**
   * This function checks to see if any of the command's audioString
   * in the commandList is in the inputed string. If it is then
   * it outputs the command name to the motionModule and returns true. If there
   * is no match then it returns false and
   * does nothing. This is how the
   * Voice Controller checks to see if the user
   * said a trained command to the RoboDog.
   *@param a constant string reference representing a microphone output
   *@return a bool stating whether or not a command was matched
   */
  bool matchCommand(const std::string& signal);

  //! set the command's audio string in the commandlist
  /**
   * This function checks to see if the cmdname is a command name for one
   * of the commands in the command list. If it is not then it outputs false.
   * If it is then it sets that command's audioString to be
   * the inputed signal string and outputs true.
   *@param a constant string reference representing a command name
   *@param a constant string reference representing a microphone signal
   *@return a bool stating whether or not a command was trained
   */
  bool train(const std::string& cmdname, const std::string& signal);

  //! see the command list function
  /**
   * This function outputs a replica of the commandList
   * so people can see what is in it but not modify it
   *@param nothing
   *@return it returns a command vector that matches the commandList
   */
  std::vector<command> seeCommandList();

  //! Private Attributes
 private:
  //! command list
  /**
   * This is a vector of all the possible
   * commands that can be inputed to the
   * motionModule
   */
  std::vector<command> commandList;

  //! RoboDog motion module
  /**
   * This is a motionModuleStub representing
   * the actual RoboDog's motionModule
   */
  motionModuleStub roboDogMotionModule;
};

#endif  // include_voiceController_hpp__
