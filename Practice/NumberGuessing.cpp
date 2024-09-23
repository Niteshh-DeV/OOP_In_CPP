#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

// Function to start the guessing game
void guessingGame(int maxAttempts, int range) {
    srand(time(0));  // Seed random number generator
    int randomNumber = rand() % range + 1;  // Random number between 1 and range
    int guess, attempts = 0;

    cout << "I have generated a number between 1 and " << range << ". Can you guess it?" << endl;

    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == randomNumber) {
            cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << endl;
            return;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    cout << "Sorry! You've used all " << maxAttempts << " attempts. The correct number was " << randomNumber << "." << endl;
}

int main() {
    int maxAttempts, range;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Enter the maximum number of attempts: ";
    cin >> maxAttempts;
    cout << "Enter the range for the random number (1 to X): ";
    cin >> range;

    guessingGame(maxAttempts, range);

    return 0;
}
