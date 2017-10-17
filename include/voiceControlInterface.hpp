/**
 *@author Ruben Acevedo
 *@file voiceControlInterface.hpp
 *@brief This is the ".hpp" file for the voiceControlInterface Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file will define the methods and attributes of the
 * voiceControlInterface Class
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
#ifndef include_voiceControlInterface_hpp_
#define include_voiceControlInterface_hpp_

#include <voiceController.hpp>
#include <microphoneStub.hpp>
#include <string>

//! A voiceControlInterface Class
/**
 * This class is the interface class for the RoboDog
 * Voice Controller component.Its purpose is to prompt
 * the user to turn on the voice controller,
 * implement a listening or training setting and get the voiceController
 * class to interact with the RoboDog's microphone module.
 */
class voiceControlInterface {
  //! Public Methods
 public:
  //! Class Constructor
  /**
   * This code constructs the class.
   * It initializes the on bool to be false.
   * @param nothing
   * @return nothing
   */
  voiceControlInterface();

  //! turn the interface on
  /**
   * This function sets the on bool to true and outputs to the user that
   * the interface is on. if the on bool is already true then it outputs
   * nothing to the user.
   * @param nothing
   * @return a string stating what the function printed to the user
   */
  std::string turnOn();

  //! turn the interface off
  /**
   * This function sets the on bool to false and outputs to the user that
   * the interface shut down. if the on bool is already false the function outputs
   * nothing to the user.
   * @param nothing
   * @return a string stating what the function printed to the user
   */
  std::string turnOff();

  //! the listen function
  /**
   * This function outputs the signals from the microphone and uses the
   * voiceController to send commands to the motionModule if the microphone
   * signals contain a motion command audio string. It will do this only
   * if the interface is on.
   * It is important to note that this function requires
   * the user to input strings. For this reason it is difficult to
   * write a unit test for it so you must enter a bool as a parameter
   * indicating if you are using this function in a unit test or not.
   * If you are using it as a unit test then the function will pre-sets
   * all the user input values.
   * @param a bool stating if this function is called by a unit test
   * @return a bool stating if the interface is on or not
   */
  bool listen(bool test);

  //! the train mode function
  /**
   * This function prompts the user to "say" the audio signal they
   * want to associate for each of the 7 motion commands. Since we are
   * using a microphone stub we prompt the user to type in the audio
   * string for each command.
   * This function will only be executed if the interface is on.
   * It is important to note that this function requires
   * the user to input strings. For this reason it is difficult to
   * write a unit test for it so you must enter a bool as a parameter
   * indicating if you are using this function in a unit test or not.
   * If you are using it as a unit test then the function will pre-sets
   * all the user input values.
   * @param a bool stating if this function is called by a unit test
   * @return a bool stating if the interface is on or not
   */
  bool trainMode(bool test);

  //! is on function
  /**
   * This function returns the on bool
   * @param nothing
   * @return a bool representing the on bool
   */
  bool isOn();

  //! Private Attributes
 private:
  //! on bool
  /**
   * This is a bool stating if the
   * interface is turned on
   * or not
   */
  bool on;

  //! RoboDog voice controller
  /**
   * This is the RoboDog's voice controller
   */
  voiceController roboDogVoiceController;

  //! RoboDog microphone
  /**
   * This is the microphoneStub representing
   * the actual RoboDog's microphone
   */
  microphoneStub roboDogMicrophone;
};

#endif  // include_voiceControlInterface_hpp_
