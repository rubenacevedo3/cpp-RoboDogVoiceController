/**
 *@author Ruben Acevedo
 *@file microphoneStubTest.cpp
 *@brief This is the ".cpp" file for testing the microphoneStub Class
 *@copyright [2017] Ruben Acevedo
 *
 * This file tests the microphoneStub Class using google test
 *
 */
#include <microphoneStub.hpp>
#include <gtest/gtest.h>
#include <string>

//! test the microphoneStub constructor
/**
 * This tests makes sure that the microphoneStub constructor has
 * at least one "pre-recorded" audio signal
 *
 */
TEST(microphoneStubTest, constructorTest) {
  microphoneStub m;
  EXPECT_NE(0, m.getAudioSignalsSize());
}

//! test the getAudioSignalsSizeTest
/**
 * This tests makes sure getAudioSignalsSize function
 * is working correctly. Given my current constructor
 * the audioSignals vector should have 12 elements.
 *
 */
TEST(microphoneStubTest, getAudioSignalsSizeTest) {
  microphoneStub m;
  EXPECT_EQ(12, m.getAudioSignalsSize());
}

//! test the randomSignals function
/**
 * This tests makes sure that the randomSignals
 * function outputs random audio signals. This test
 * assumes that there are at least 12 elements in the audioSignals
 * vector given that the class constructor works properly
 *
 */
TEST(microphoneStubTest, randomSignalsTest) {
  microphoneStub m;
  auto s1 = m.randomSignals();
  auto s2 = m.randomSignals();
  auto s3 = m.randomSignals();
  auto s4 = m.randomSignals();
  EXPECT_FALSE(s1 == s2 && s2 == s3 && s3 == s4);
}

//! test the record function
/**
 * This tests makes sure that the record function
 * saves an audio signal in the audioSignal vector
 *
 */
TEST(microphoneStubTest, recordTest) {
  microphoneStub m;
  m.record("akljfdhaksldjhfiouer");
  int i = 0;
  auto b = false;
  while (i <100) {
    if ("akljfdhaksldjhfiouer" == m.randomSignals()) {
        b = true;
        break;
    }
    i++;
  }
  EXPECT_TRUE(b);
}
