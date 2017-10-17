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
  voiceControlInterface vci;
  vci.turnOn();
  vci.trainMode(false);
  vci.listen(false);
  vci.turnOff();
}
