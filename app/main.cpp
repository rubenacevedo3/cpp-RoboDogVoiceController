/**
 *@author Ruben Acevedo
 *@file main.cpp
 *@brief This is the main.cpp file for the whole RoboDogVoiceController-eclipse project
 *@copyright [2017] Ruben Acevedo
 *
 * This file will run the an example demo that
 * simulates full functionality of the RoboDog
 * Voice Controller component
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
#include <voiceControlInterface.hpp>
#include <iostream>
#include <string>


  //! the main function
  /**
   * This function is the int main() that runs the demo that
   * simulates full functionality of the RoboDog
   * Voice Controller component
   *@param nothing
   *@return an integer
   */
int main() {
  /**
   * Set up the demo
   */
  std::cout << "---------------------------"
    "-----------------------Starting "
    "the Demo-----------------------"
    "---------------------------" << std::endl;
  std::cout << "***" << std::endl;
  std::cout << "***" << std::endl;
  std::cout << "***" << std::endl;
  voiceControlInterface vci;

  vci.turnOn(); /*!< turns the voiceContoller Interface on */
  std::cout << "***" << std::endl;
  std::cout << "***" << std::endl;
  std::cout << "***" << std::endl;
  std::string in;
  bool off = false;

  while (vci.isOn()) { /*!< does loop until user turns Interface off */
	  /**
	   * Sets up the main menu
	   */
    std::cout << "---------------------------"
      "---------------------------Main "
      "Menu---------------------------"
      "---------------------------" << std::endl;
    std::cout << "Select the mode you want:" << std::endl;

     /**
      * promts the user to select a mode
      */
    std::cout << "Enter 't' for training mode, enter 'l'"
      " for listening mode, or enter 'x' to turn the Voice"
      " Interface off: " << std::endl;
    std::getline(std::cin, in);

    /**
     * does training mode
     */
    if (in == "t") {
      vci.trainMode(false);

      /**
       * promts the user to turn the Interface off
       */
      std::cout << "Do you want to turn the Voice "
        "Interface off (y/n)? :" << std::endl;
      std::getline(std::cin, in);
      /**
       * turns the Interface off
       */
      if (in == "y") {
        std::cout << "***" << std::endl;
        std::cout << "***" << std::endl;
        std::cout << "***" << std::endl;
        vci.turnOff();
        std::cout << "***" << std::endl;
        std::cout << "***" << std::endl;
        std::cout << "***" << std::endl;
        std::cout << "Demo is over." << std::endl;
      }
      /**
       * does listening mode
       */
    } else if (in == "l") {
        vci.listen(false);
        /**
         * promts the user to turn the Interface off
         */
        std::cout << "Do you want to turn the Voice "
          "Interface off (y/n)? :" << std::endl;
        std::getline(std::cin, in);
        /**
          * turns the Interface off
          */
        if (in == "y") {
          std::cout << "***" << std::endl;
          std::cout << "***" << std::endl;
          std::cout << "***" << std::endl;
          vci.turnOff();
          std::cout << "***" << std::endl;
          std::cout << "***" << std::endl;
          std::cout << "***" << std::endl;
          std::cout << "Demo is over." << std::endl;
        }
        /**
          * turns the Interface off
          */
    } else if (in == "x") {
        std::cout << "***" << std::endl;
        std::cout << "***" << std::endl;
        std::cout << "***" << std::endl;
        vci.turnOff();
        std::cout << "***" << std::endl;
        std::cout << "***" << std::endl;
        std::cout << "***" << std::endl;
        std::cout << "Demo is over." << std::endl;
        /**
          * User puts an invalid input
          * it prompts the user to try again
          */
    } else {
        std::cout << "!!!!!!!!Error: Try again!!!!!!!!!" << std::endl;
      }
  }
  return 0;
}
