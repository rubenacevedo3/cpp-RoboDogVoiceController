/**
 *@author Ruben Acevedo
 *@file microphoneStub.hpp
 *@brief This is the ".hpp" file for the microphoneStub Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file will define the methods and attributes of the
 * microphoneStub Class. It is important to note that
 * this is only the stub of the real microphone Class needed
 * to present the capabilities of the VoiceController Component.
 * The real microphone Class will need to be integrated
 * with the VoiceController component in the future. The assumption
 * is made that the real microphone Class takes in audio files
 * and outputs them as strings.
 */
/**
 * MIT License
 *
 * Copyright 2017 Ruben Acevedo
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without
 * limitation the rights to use, copy, modify, merge, publish, distribute,
 * sublicense, and/or sell copies of the Software, and to permit persons to
 * whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software. THE SOFTWARE IS
 * PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE. © 2017 GitHub, Inc.
 */
#ifndef include_microphoneStub_hpp_
#define include_microphoneStub_hpp_

#include <string>
#include <vector>

//! A microphoneStub Class
/**
 * This class is a stub for the real microphone Class in
 * the RoboDog Platform
 */
class microphoneStub {
  //! Public Methods
 public:
  //! Class Constructor
  /**
   * This code constructs the class.
   * It initializes the vector of audioSingnals with some "pre-recorded" audio signals which
   * will be eventually used to simulate that the microphoneStub is picking up random signals
   * from its environment.
   * @param nothing
   * @return nothing
   */
  microphoneStub();

  //! gets random signals function
  /**
   * This function simulates that the microphone is listening
   * to its environment by randomly outputting different "pre-recorded"
   * audio signals.
   *@param nothing
   *@return a string representing an audio signal
   */
  std::string randomSignals();

  //! record audio signal function
  /**
   * This function records new audio signals and adds it to
   * audioSignals vector.
   *@param a constant string reference representing an audio signal
   *@return nothing
   */
  void record(const std::string& as);

  //! get the audioSignals vector size function
  /**
   * This function returns the audioSignals vector size.
   *@param nothing
   *@return an integer representing the audioSignal vector size
   */
  int getAudioSignalsSize();

  //! Public Attributes
 private:
  //! audioSignals vector
  /**
   * This is a vector containing "pre-recorded" audio signals which
   * will be eventually used to simulate that the microphoneStub is picking up random signals
   * from its environment.
   */
  std::vector<std::string> audioSignals;
};

#endif  // include_microphoneStub_hpp_
