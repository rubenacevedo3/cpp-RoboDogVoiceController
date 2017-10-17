/**
 *@author Ruben Acevedo
 *@file motionModuleStub.hpp
 *@brief This is the ".hpp" file for the motionModuleStub Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file will define the methods and attributes of the
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
#ifndef include_motionModuleStub_hpp_
#define include_motionModuleStub_hpp_

#include <string>

//! A motionModuleStub Class
/**
 * This class is a stub for the real motionModule Class in
 * the RoboDog Platform
 */
class motionModuleStub {
  //! Public Methods
 public:
  //! Executes a motion function
  /**
   * This function simulates the execution of the motion given
   * a command. It will print "**<inset motion here>**" stating that
   * the given motion is being done by the RoboDog Platform
   *@param a constant string reference representing the command name
   *@return a string that says the action that was done
   */
  std::string executeMotion(const std::string& cmdname);
};

#endif  // include_motionModuleStub_hpp_
