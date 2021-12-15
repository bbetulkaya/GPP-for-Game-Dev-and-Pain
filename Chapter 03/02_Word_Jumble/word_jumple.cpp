// Word Jumple
// The classic word jumble game where the player can ask for a hint

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    enum fields
    {
        WORD,
        HINT,
        NUM_FIELDS
    };

    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
        {
            {"wall", "Do you feel you're banging your head against something?"},
            {"glasses", "These might help you see the answer."},
            {"labored", "Going slowly, is it?"},
            {"persistent", "Keep at it."},
            {"jumble", "It's what the game is all about."}};

    // Pick a random word
    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD]; //word to guess
    string theHint = WORDS[choice][HINT]; //hint for word
    unsigned int pointValue = theWord.size();

    // Jumbling the Word
    string jumble = theWord;
    int length = jumble.size();
    for (int i = 0; i < length; i++)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);

        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    // Game Prompt
    cout << "\t\t\t Welcome to Word Jumble! \n\n";
    cout << "Unscramble the letters to make a word. \n";
    cout << "Enter 'hint' for a hint. \n";
    cout << "Enter 'quit' to quit the game.\n\n";

    cout << "The jumble is: " << jumble;
    cout << "\nThe word is " << pointValue << " point value.";

    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;

    // Game Loop
    while ((guess != theWord) && (guess != "quit"))
    {
        if (guess == "hint")
        {
            if (pointValue == 0)
            {
                cout << "Sorry, I can't give you hint";
                cout << " because you don't have enough point.";
            }
            else
            {
                cout << theHint << endl;
                pointValue--;
            }   
        }
        else
        {
            cout << "Sorry, that's not it.";
        }
        cout << "\n\nThe jumble is: " << jumble;
        cout << "\n" << pointValue << " point has left.";
        cout << "\nYour guess: ";
        cin >> guess;
    }

    // Exit Game Loop (Win the game)
    if (guess == theWord)
    {
        cout << "\nThat's it! You guessed it!\n";
    }

    cout << "\nThanks for playing.\n";
    return 0;
}