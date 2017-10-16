/**
 *@author Ruben Acevedo
 *@file voiceController.cpp
 *@brief This is the ".cpp" file for the voiceController Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file implements the methods and attributes of the
 * voiceController Class.
 */

#include <voiceController.hpp>
#include <motionModuleStub.hpp>
#include <command.hpp>
#include <string>
#include <vector>

//! Class Constructor
  /**
   * This code constructs the class.
   * It initializes the commandList vector with commands that
   * have the appropriate commandNames that can be sent to
   * the RoboDog MotionModule. The 7 commands that the robot can do are
   * walk, turn right, turn left, stop, sit, lie down,
   * and chase tail. It does not however assign
   * as audioString to the command names.
   * @param nothing
   * @return nothing
   */
voiceController::voiceController() {
  command c1("walk");
  command c2("turn right");
  command c3("turn left");
  command c4("stop");
  command c5("sit");
  command c6("lie down");
  command c7("chase tail");
  commandList.push_back(c1);
  commandList.push_back(c2);
  commandList.push_back(c3);
  commandList.push_back(c4);
  commandList.push_back(c5);
  commandList.push_back(c6);
  commandList.push_back(c7);
}

  //! match the command function
  /**
   * This function checks to see if any of the command's audioString
   * in the commandList is in the inputed string. If it is then
   * it outputs the command name to the motionModule and returns true. If there
   * is no match then it returns false and
   * does nothing. This is how the
   * Voice Controller checks to see if the user
   * said a trained command to the RoboDog.
   *@param a constant string reference representing a microphone output
   *@return a bool stating whether or not a command was matched
   */
bool voiceController::matchCommand(const std::string& signal) {
  auto match = false;

  for (auto cmd : commandList) { /*!< search through the whole commandList */
    int i = 0;
    int c = 0;
    auto as = cmd.getAudioString(); /*!< gets the command's audio string */
  	/**
     * This while loop searches the whole
     * signal to see if the command's audio string is
     * in the signal
     */
    while (i < signal.size()) { /*!< searches through the whole signal */
      if (signal[i] == as[c]) {
        if (c == as.size() - 1) {
       	 /**
          * This means it found the command's complete audio string
          *  in the signal
          */
          match = true;
          /**
           * This sends the command to the motionModule
           */
          auto mm = roboDogMotionModule.executeMotion(cmd.getCommandName());
          break;
        }
        c++;
      } else {
        c = 0;
      }
      i++;
    }
  }
  return match;
}

  //! set the command's audio string in the commandlist
  /**
   * This function checks to see if the cmdname is a command name for one
   * of the commands in the command list. If it is not then it outputs false.
   * If it is then it sets that command's audioString to be
   * the inputed signal string and outputs true.
   *@param a constant string reference representing a command name
   *@param a constant string reference representing a microphone signal
   *@return a bool stating whether or not a command was trained
   */
bool voiceController::train(const std::string& cmdname,
    const std::string& signal) {
  auto validCmdName = false;

  for (auto& cmd : commandList) { /*!< search through the whole commandList */
    if (cmd.getCommandName() == cmdname) {
      validCmdName = true;
      /**
       * This sets the command's audio signal
       * to be the inputed signal;
       */
      cmd.setAudioString(signal);
    }
  }
  return validCmdName;
}

  //! see the command list function
  /**
   * This function outputs a replica of the commandList
   * so people can see what is in it but not modify it
   *@param nothing
   *@return it returns a command vector that matches the commandList
   */
std::vector<command> voiceController::seeCommandList() {
  auto s = commandList;
  return s;
}
