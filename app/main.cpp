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

#include <voiceController.hpp>
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
  voiceController v;
  auto b1 = v.train("chase tail", "where is your tail");
  auto cl = v.seeCommandList();
  auto b2 = v.matchCommand("where is your tail");
  auto b3 = v.matchCommand("walk");
  std::cout << b1 << b2 << b3<< std::endl;
  std::cout << cl[0].getCommandName() << cl[0].getAudioString() << std::endl;
  std::cout << cl[1].getCommandName() << cl[1].getAudioString() << std::endl;
  std::cout << cl[2].getCommandName() << cl[2].getAudioString() << std::endl;
  std::cout << cl[3].getCommandName() << cl[3].getAudioString() << std::endl;
  std::cout << cl[4].getCommandName() << cl[4].getAudioString() << std::endl;
  std::cout << cl[5].getCommandName() << cl[5].getAudioString() << std::endl;
  std::cout << cl[6].getCommandName() << cl[6].getAudioString() << std::endl;
  return 0;
}
