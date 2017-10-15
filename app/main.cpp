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

#include <motionModuleStub.hpp>
#include <iostream>
#include <string>

int main() {
    motionModuleStub m;
    std::string cmd = "wal";
    cmd = m.executeMotion(cmd);
    return 0;
}
