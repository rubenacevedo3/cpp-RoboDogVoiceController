/**
 *@author Ruben Acevedo
 *@file voiceControlInterface.cpp
 *@brief This is the ".cpp" file for the voiceControlInterface Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file implements the methods and attributes of the
 * voiceControlInterface Class.
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
#include <voiceControlInterface.hpp>
#include <string>
#include <iostream>

  //! Class Constructor
  /**
   * This code constructs the class.
   * It initializes the on bool to be false.
   * @param nothing
   * @return nothing
   */
voiceControlInterface::voiceControlInterface() {
  on = false;
}

  //! turn the interface on
  /**
   * This function sets the on bool to true and outputs to the user that
   * the interface is on. if the on bool is already true then it outputs
   * nothing to the user.
   * @param nothing
   * @return a string stating what the function printed to the user
   */
std::string voiceControlInterface::turnOn() {
  if (on) {
    return "";
  }

  on = true;
  auto s = "RoboDog Voice Control Interface is on";
  std::cout << s << std::endl;
  return s;
}

  //! turn the interface off
  /**
   * This function sets the on bool to false and outputs to the user that
   * the interface shut down. if the on bool is already false the function outputs
   * nothing to the user.
   * @param nothing
   * @return a string stating what the function printed to the user
   */
std::string voiceControlInterface::turnOff() {
  if (on == false) {
    return "";
  }

  on = false;
  auto s = "RoboDog Voice Control Interface is off";
  std::cout << s << std::endl;
  return s;
}

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
bool voiceControlInterface::listen(bool test) {
  if (on) {
    /**
     * Intro prompt to the listening setting
     */
    std::cout << "*" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "Welcome to the RoboDog Voice Control "
      "listening setting" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "*" << std::endl;

    std::string exit = "n";
    std::string s;

    /**
     * Until the user no longer wants to be in the listening setting
     * it will output the microphone signal and the robot will
     * move if the microphone picked up a command saying
     */
    while (exit == "n") {
      std::cout << "Exit (y/n)?: " << std::endl;
      if (test != true) {
      std::getline(std::cin, exit);
      }
      s = roboDogMicrophone.randomSignals();
      std::cout << "Microphone signal is: " << s << std::endl;

      std::cout << "*" << std::endl;
      std::cout << "*" << std::endl;
      std::cout << "*" << std::endl;
      roboDogVoiceController.matchCommand(s);
      std::cout << "*" << std::endl;
      std::cout << "*" << std::endl;
      std::cout << "*" << std::endl;
      if (test) {
        exit = "y";
      }
    }

    /**
     * Prompts that you are done listening
     */
    std::cout << "*" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "You left the Listening Setting" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "*" << std::endl;
    std::cout << "*" << std::endl;
    return true;
  }
  return false;
}

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
bool voiceControlInterface::trainMode(bool test) {
  if (on) {
  /**
   * Intro prompt to the training setting
   */
  std::cout << "*" << std::endl;
  std::cout << "*" << std::endl;
  std::cout << "*" << std::endl;
  std::cout << "Welcome to the RoboDog Voice Control "
    "training setting" << std::endl;
  std::cout << "*" << std::endl;
  std::cout << "*" << std::endl;
  std::cout << "*" << std::endl;

  /**
   * trains the walk command
   */
  std::string c1;
  std::cout << "Say your command to make"
    " RoboDog walk (type it in): " << std::endl;
  if (test != true) {
    std::getline(std::cin, c1);
  } else {
    c1 = "walk";
  }
  roboDogMicrophone.record(c1);
  roboDogVoiceController.train("walk", c1);

  /**
   * trains the turn right command
   */
  std::string c2;
  std::cout << "Say your command to make RoboDog turn "
    "right (type it in): " << std::endl;
  if (test != true) {
    std::getline(std::cin, c2);
  } else {
    c2 = "right";
  }
  roboDogMicrophone.record(c2);
  roboDogVoiceController.train("turn right", c2);

  /**
   * trains the turn left command
   */
  std::string c3;
  std::cout << "Say your command to make RoboDog "
    "turn left (type it in): " << std::endl;
  if (test != true) {
    std::getline(std::cin, c3);
  } else {
    c3 = "left";
  }
  roboDogMicrophone.record(c3);
  roboDogVoiceController.train("turn left", c3);

  /**
   * trains the stop command
   */
  std::string c4;
  std::cout << "Say your command to make "
    "RoboDog stop (type it in): " << std::endl;
  if (test != true) {
    std::getline(std::cin, c4);
  } else {
    c4 = "stop";
  }
  roboDogMicrophone.record(c4);
  roboDogVoiceController.train("stop", c4);

  /**
   * trains the sit command
   */
  std::string c5;
  std::cout << "Say your command to make "
    "RoboDog sit (type it in): " << std::endl;
  if (test != true) {
    std::getline(std::cin, c5);
  } else {
    c5 = "sit";
  }
  roboDogMicrophone.record(c5);
  roboDogVoiceController.train("sit", c5);

  /**
   * trains the lie down command
   */
  std::string c6;
  std::cout << "Say your command to make "
    "RoboDog lie down (type it in): " << std::endl;
  if (test != true) {
    std::getline(std::cin, c6);
  } else {
    c6 = "lie down";
  }
  roboDogMicrophone.record(c6);
  roboDogVoiceController.train("lie down", c6);

  /**
   * trains the lie down command
   */
  std::string c7;
  std::cout << "Say your command to make RoboDog "
    "chase its tail (type it in): " << std::endl;
  if (test != true) {
    std::getline(std::cin, c7);
  } else {
    c7 = "chase tail";
  }
  roboDogMicrophone.record(c7);
  roboDogVoiceController.train("chase tail", c7);

  /**
   * Prompts that you are done Training
   */
  std::cout << "*" << std::endl;
  std::cout << "*" << std::endl;
  std::cout << "*" << std::endl;
  std::cout << "Training is complete!" << std::endl;
  std::cout << "*" << std::endl;
  std::cout << "*" << std::endl;
  std::cout << "*" << std::endl;

  return true;
  }
  return false;
}

  //! is on function
  /**
   * This function returns the on bool
   * @param nothing
   * @return a bool representing the on bool
   */
bool voiceControlInterface::isOn() {
  return on;
}
