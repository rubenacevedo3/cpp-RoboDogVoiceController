/**
 *@author Ruben Acevedo
 *@file motionModuleStub.cpp
 *@brief This is the ".cpp" file for the motionModuleStub Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file implements the methods and attributes of the
 * motionModuleStub Class. It is important to note that
 * this is only the stub of the real motionModule Class needed
 * to present the capabilities of the VoiceController Component.
 * The real motionModule Class will need to be integrated
 * with the VoiceController component in the future.
 */

#include <iostream>
#include <string>
#include <motionModuleStub.hpp>


  //! Executes a motion function
  /**
   * This function simulates the execution of the motion given
   * a command. It will print "**<inset motion here>**" stating that
   * the given motion is being done by the RoboDog Platform
   *@param a constant string representing the command name
   *@return nothing
   */
void motionModuleStub::executeMotion(const std::string cmdname) {

	if (cmdname == "walk"){
		std::cout << "**RoboDog walks**"<< std::endl;
	}
	else if (cmdname == "turn right"){
		std::cout << "**RoboDog turns right**"<< std::endl;
	}
	else if (cmdname == "turn left"){
		std::cout << "**RoboDog turns left**"<< std::endl;
	}
	else if (cmdname == "stop"){
		std::cout << "**RoboDog stops**"<< std::endl;
	}
	else if (cmdname == "sit"){
		std::cout << "**RoboDog sits**"<< std::endl;
	}
	else if (cmdname == "lie down"){
		std::cout << "**RoboDog lies down**"<< std::endl;
	}
	else if (cmdname == "chase tail"){
		std::cout << "**RoboDog chases its tail**"<< std::endl;
	}
	else {
		std::cout << "**RoboDog does nothing**"<< std::endl;
	}
}
