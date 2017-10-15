/**
 *@author Ruben Acevedo
 *@file microphoneStub.cpp
 *@brief This is the ".cpp" file for the microphoneStub Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file implements the methods and attributes of the
 * microphoneStub Class. It is important to note that
 * this is only the stub of the real microphone Class needed
 * to present the capabilities of the VoiceController Component.
 * The real microphone Class will need to be integrated
 * with the VoiceController component in the future. The assumption
 * is made that the real microphone Class takes in audio files
 * and outputs them as strings.
 */

#include <microphoneStub.hpp>
#include <stdlib.h>
#include <string>
#include <vector>

  //! Class Constructor
  /**
   * This code constructs the class.
   * It initializes the vector of audioSingnals with some "pre-recorded" audio signals which
   * will be eventually used to simulate that the microphoneStub is picking up random signals
   * from its environment.
   * @param nothing
   * @return nothing
   */
microphoneStub::microphoneStub() {
  audioSignals.push_back("I just saw the new StarWars movie.");
  audioSignals.push_back("Do you want to see my RoboDog walk? Sure why not."
    " Ok RoboDog mush!");
  audioSignals.push_back("I just got my new RoboDog. Look what "
    "it can do. RoboDog play dead");
  audioSignals.push_back("Oh no! RoboDog is going to hit the wall. "
    "RoboDog turn right!");
  audioSignals.push_back("Hola amigo como estas. Wow que padre"
    " robot tienes. Que hace?");
  audioSignals.push_back("Sprechen sie Deutsch?");
  audioSignals.push_back("Oh I guess that did not work. Let me "
    "try this. RoboDog stop.");
  audioSignals.push_back("RoboDog you are going "
    "the wrong way. RoboDog turn left.");
  audioSignals.push_back("I haven't trained him much. All he can "
    "do is sit. RoboDog sit.");
  audioSignals.push_back("I can't go I already made plans with Mike.");
  audioSignals.push_back("Yeah he really does act like a real dog. He can even"
    " chase his tail. Watch! RoboDog where is your tail?");
  audioSignals.push_back("But Mom, I do not want to take out the trash. "
    "Daniel's parents don't make him do that. I do not care about "
    "Daniel I care about you! Ugh this house is a prison!");
}

  //! gets random signals function
  /**
   * This function simulates that the microphone is listening
   * to its environment by randomly outputting different "pre-recorded"
   * audio signals.
   *@param nothing
   *@return a string representing an audio signal
   */
std::string microphoneStub::randomSignals() {
  if (audioSignals.size() == 0) {
    return "";
  }

  auto r = rand() %audioSignals.size();
  return audioSignals[r];
}

  //! record audio signal function
  /**
   * This function records new audio signals and adds it to
   * audioSignals vector.
   *@param a constant string reference representing an audio signal
   *@return nothing
   */
void microphoneStub::record(const std::string& as) {
  audioSignals.push_back(as);
}

//! get the audioSignals vector size function
/**
 * This function returns the audioSignals vector size.
 *@param nothing
 *@return an integer representing the audioSignal vector size
 */
int microphoneStub::getAudioSignalsSize() {
  return audioSignals.size();
}
