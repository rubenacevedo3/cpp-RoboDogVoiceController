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
