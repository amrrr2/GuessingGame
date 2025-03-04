Number Guessing Game

Overview

This is a simple number guessing game implemented in C++. The game allows the player to choose between three difficulty levels, each with a different range of numbers and a limited number of attempts to guess the correct number.

How to Play

Run the program.

Choose a difficulty level:

Easy: Guess a number between 1 and 20 in 10 tries.

Medium: Guess a number between 1 and 50 in 7 tries.

Hard: Guess a number between 1 and 100 in 5 tries.

The game will generate a random number within the chosen range.

Start guessing by entering numbers.

After each guess, you will receive feedback:

"Too High!" if your guess is higher than the correct number.

"Too Low!" if your guess is lower than the correct number.

"Congrats!" if you guess correctly within the allowed attempts.

If you fail to guess within the allowed attempts, the game will reveal the correct number.

You can choose to play again or exit the game.

Features

Three difficulty levels

Random number generation for each round

Input validation to ensure proper user input

Feedback on each guess

Option to exit the game

Requirements

A C++ compiler (e.g., g++, MinGW, or Visual Studio)

How to Compile and Run

Open a terminal or command prompt.

Navigate to the directory containing guessing_game.cpp.

Compile the code using:

g++ guessing_game.cpp -o guessing_game

Run the game using:

./guessing_game  # On Linux/macOS
guessing_game.exe  # On Windows

Notes

The game uses rand() for random number generation, but it does not seed the random number generator using srand(time(0)). This means the same sequence of numbers may appear each time the game is run. To improve randomness, add srand(time(0)); at the beginning of main().

Future Improvements

Implement a scoring system based on the number of attempts used.

Improve user interface with better messages and formatting.

Add a replay option without restarting the program.

Enjoy the game!
