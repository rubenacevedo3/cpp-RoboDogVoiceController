/**
 *@author Ruben Acevedo
 *@file command.hpp
 *@brief This is the ".hpp" file for the command Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file will define the methods and attributes of the
 * command Class
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
#ifndef include_command_hpp_
#define include_command_hpp_

#include <string>

//! A command Class
/**
 * This class stores a robot's action command name
 * with its respective audio commands string that come
 * from the microphone once the robot has been trained by the user
 */
class command {
  //! Public Methods
 public:
  //! Class Constructor
  /**
   * This code constructs the class.
   * It initializes the robot action to be what is entered
   * and the trained audio command for that action to be essentially impossible or
   * in this case "!@#$%";
   * @param a constant string reference representing the command name
   * @return nothing
   */
  explicit command(const std::string& action);

  //! get the audio string command of the command class
  /**
   * This function outputs the command class' audio command string
   *@param nothing
   *@return a string representing the class' audio command string
   */
  std::string getAudioString();

  //! set the audio string command of the command class
  /**
   * This function sets the command class' audio command string
   *@param a constant string reference which will be the class' audio command string
   *@return nothing
   */
  void setAudioString(const std::string& as);

  //! get the command name of the command class
  /**
   * This function outputs the command class' command name
   *@param nothing
   *@return it returns a string repersenting the class' command name
   */
  std::string getCommandName();


  //! Private Attributes
 private:
  //! audio string
  /**
   * This is the audio string coming from the microphone module
   * that is paired with the command name.
   * It is initialized as "!@#$%" until it is set to be different.
   */
  std::string audioString;
  //! the command name
  /**
   * This is the command name which is paired with the audio string
   */
  std::string commandName;
};

#endif  // include_command_hpp_
