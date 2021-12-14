#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randomNumber;
    int playerGuess;
    int numberOfTries = 0;

    // Generate random number
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand() % 100 + 1; // the number wil be range in 0 - 100

    cout << "\tWelcome to Guess My Number\n";

    do
    {
        numberOfTries++;
        cout << "\n Enter a guess in range 0-100: ";
        cin >> playerGuess;

        if (playerGuess > randomNumber)
        {
            cout << "Too High!\n\n";
        }
        else if (playerGuess < randomNumber)
        {
            cout << "Too low!\n\n";
        }
        else
        {
            cout << "\nThat's it! You got it in " << numberOfTries << " guesses!\n";
        }
    } while (playerGuess != randomNumber);

    return 0;
}