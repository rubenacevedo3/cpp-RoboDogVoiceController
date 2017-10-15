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

#include <command.hpp>
#include <iostream>
#include <string>

int main() {
  command c("walk");
  auto s = c.getAudioString();
  std::cout << "audio string is "<< s << std::endl;
  auto n = c.getCommandName();
  std::cout << "command name is  "<< n<< std::endl;

  c.setAudioString("What up friends");
  s = c.getAudioString();
  std::cout << "audio string is " << s << std::endl;
  return 0;
}
