#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int randomNumber = (rand() % 100) + 1;
    int guess;
    int numOfTrials = 0;

    cout << "Hey! I've just thought about a number between 1 and 100." << endl;
    cout << "Guess it: ";

    while (true) {
        cin >> guess;
        numOfTrials += 1;

        if (guess == randomNumber) {
            cout << "Correct! You've guessed it in " << numOfTrials << " attempt :)" << endl;
            break;
        }

        if (guess > randomNumber) {
            cout << "Too high" << endl;
        } else if (guess < randomNumber) {
            cout << "Too low" << endl;
        }

        cout << "Nope. Guess " << numOfTrials + 1 << " time: ";
    }

    cin.get();

    return 0;
}
