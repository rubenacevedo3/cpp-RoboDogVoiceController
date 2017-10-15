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

#include <microphoneStub.hpp>
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
  microphoneStub m;
  m.record("hello world");
  m.record("what is good");
  m.record("I love game of thrones");

  int i = 0;
  std::string s;
  while (i < 100) {
    s = m.randomSignals();
    std::cout << s << std::endl;
    i++;
  }
  return 0;
}
