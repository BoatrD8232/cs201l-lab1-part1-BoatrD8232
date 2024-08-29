//Name- David Boatright
//Assignment- Lab 1 Part 1
//Lecture- Tues Thurs 11:30-12:45
//Lab- Wed 7:00-9:30

#include <iostream>
using namespace std;

int main() {
    // There is a logic error in this program.
    // Correct this error, test your changes, and commit the changes
    int guess = 0, solution = 15;
    char answer = 'y';
    cout << "Would you like 222 play? ";
    cin >> answer;
    while (answer != 'n') {
        cout << "Enter your guess between 0 & 50: ";
        cin >> guess;
        if (guess > solution) {
            cout << "sorry - your guess is too big\n";
        }
        else if (guess < solution)
            cout << "sorry - your guess is too low\n";
        else
            cout << "Correct!";

        cout << "Guess again? ";
        cin >> answer;
    }
}