/**
 *@author Ruben Acevedo
 *@file motionModuleStub.hpp
 *@brief This is the ".hpp" file for the motionModuleStub Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file will define the methods and attributes of the
 * motionModuleStub Class. It is important to note that
 * this is only the stub of the real motionModule Class needed
 * to present the capabilities of the VoiceController Component.
 * The real motionModule Class will need to be integrated
 * with the VoiceController component in the future.
 */

#ifndef include_motionModuleStub_hpp_
#define include_motionModuleStub_hpp_

#include <string>

//! A motionModuleStub Class
/**
 * This class is a stub for the real motionModule Class in
 * the RoboDog Platform
 */
class motionModuleStub {
  //! Public Methods
 public:
  //! Executes a motion function
  /**
   * This function simulates the execution of the motion given
   * a command. It will print "**<inset motion here>**" stating that
   * the given motion is being done by the RoboDog Platform
   *@param a constant string reference representing the command name
   *@return a string that says the action that was done
   */
  std::string executeMotion(const std::string& cmdname);
};

#endif  // include_motionModuleStub_hpp_
