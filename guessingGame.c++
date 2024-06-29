#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Generating a random number b/w 1 - 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Hello User, Welcome to the Guessing Game!" << endl;
    cout << "I have selected a random number between 1 and 100." << endl;

    // Main game loop
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}