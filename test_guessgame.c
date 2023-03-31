#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "unity.h"

#include "guess_game.h"

// Set up function for Unity framework
void setUp(void) {}

// Tear down function for Unity framework
void tearDown(void) {}

void test_generateRandom(void) {
  int lower = 1;
  int upper = 10;
  int count = 1;
  int num = generateRandom(lower, upper, count);
  TEST_ASSERT_TRUE(num >= lower && num <= upper);
}

void test_guessGame(void) {
  int genNum = generateRandom(1, 10, 1);
  int numOfGuess = guessGame(genNum);
  TEST_ASSERT_TRUE(numOfGuess > 0 && numOfGuess <= 5);
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_generateRandom);
  RUN_TEST(test_guessGame);
  return UNITY_END();
}

