#include <stdio.h>
#include "gtest/gtest.h"

// Include the header file where the function to be tested is declared
#include "guess_game.h"

 // Test fixture
class GuessGameTest : public ::testing::Test {
  protected:
    // Set up the test fixture
      void SetUp() override {
          // Seed the random number generator with a fixed value for testing
              srand(12345);
      }
};

// Test case for guessGame function
TEST_F(GuessGameTest, TestGuessGame) {

    // Call the function with a generated number
        int num_of_guesses = guessGame(5);
                      
     // Check that the function returns the expected number of guesses
        EXPECT_EQ(num_of_guesses, 3);
}

// Main function to run the tests
int main(int argc, char** argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
                              
