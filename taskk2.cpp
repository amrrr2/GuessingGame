#include <iostream>
#include <cmath>
#include<time.h>
using namespace std;
int  main() {
    int guess = -1, choice = 0, attempts = 0, correct = 0;
    bool gameRunning = true;

    do {
        cout << "Choose the level you wanna play! " << '\n';
        cout << "[1] Easy: 20 numbers in 10 tries " << '\n';
        cout << "[2] Medium: 50 numbers in 7 tries" << endl;
        cout << "[3] Hard: 100 numbers in 5 tries " << '\n';
        cout << "[4] Exit " << '\n';
        cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3) {
            int maxRange, maxAttempts;

            switch (choice) {
            case 1:
                maxRange = 20;
                maxAttempts = 10;
                break;
            case 2:
                maxRange = 50;
                maxAttempts = 7;
                break;
            case 3:
                maxRange = 100;
                maxAttempts = 5;
                break;
            }

            correct = rand() % maxRange + 1;
            attempts = 0;
            guess = -1;

            cout << "Guess a number between 1 and " << maxRange << "!" << '\n';

            while (guess != correct && attempts < maxAttempts) {
                cin >> guess;
                attempts++;

                if (guess > correct) {
                    cout << "Too High! Try again." << endl;
                }
                else if (guess < correct) {
                    cout << "Too Low! Try again." << endl;
                }
                else {
                    cout << "Congrats! You've guessed the correct number in " << attempts << " tries." << endl;
                    break;
                }
            }

            if (guess != correct) {
                cout << "Sorry, you've used all your attempts. The correct number was " << correct << "." << endl;
            }

        }
        else if (choice == 4) {
            gameRunning = false;
            cout << "Exiting the game. Goodbye!" << endl;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Enter a valid number (1, 2, 3, or 4)." << '\n';
        }
    } while (gameRunning);

    return 0;




}
