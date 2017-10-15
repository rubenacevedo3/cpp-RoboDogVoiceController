/**
 *@author Ruben Acevedo
 *@file mcommand.cpp
 *@brief This is the ".cpp" file for the command Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file implements the methods and attributes of the
 * command Class.
 */

#include <command.hpp>
#include <string>

  //! Class Constructor
  /**
   * This code constructs the class.
   * It initializes the robot action to be what is entered
   * and the trained audio command for that action to be essentially impossible or
   * in this case "!@#$%";
   * @param a constant string reference representing the command name
   * @return nothing
   */
command::command(const std::string& action):
  audioString("!@#$%"), commandName(action) {
}

  //! get the audio string command of the command class
  /**
   * This function outputs the command class' audio command string
   *@param nothing
   *@return a string representing the class' audio command string
   */
std::string command::getAudioString() {
  return audioString;
}

  //! set the audio string command of the command class
  /**
   * This function sets the command class' audio command string
   *@param a constant string reference which will be the class' audio command string
   *@return nothing
   */
void command::setAudioString(const std::string& as) {
  audioString = as;
}

  //! get the command name of the command class
  /**
   * This function outputs the command class' command name
   *@param nothing
   *@return it returns a string repersenting the class' command name
   */
std::string command::getCommandName() {
  return commandName;
}


