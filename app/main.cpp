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

#include <iostream>
#include <string>
#include <motionModuleStub.hpp>

int main()
{
    motionModuleStub m;
    std::string cmd = "walk";
    m.executeMotion(cmd);
    return 0;
}
