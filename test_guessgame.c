#include "gtest/gtest.h"
#include "guess_game.h"

// Test case to check if generateRandom() function is generating numbers within the range
TEST(generateRandomTest, generatesNumbersWithinRange) {
    for (int i = 0; i < 100; i++) {
        int randNum = generateRandom(1, 10, 1);
        EXPECT_GE(randNum, 1);
        EXPECT_LE(randNum, 10);
    }
}

// Test case to check if guessGame() function is working correctly
TEST(guessGameTest, checksIfGuessGameWorks) {
    int numGuesses = guessGame(5);
    EXPECT_EQ(numGuesses, 1);
}

