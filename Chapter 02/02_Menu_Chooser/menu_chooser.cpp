#include <iostream>
using namespace std;

int main()
{
    /*
    *cout << "Difficulty Levels\n\n";
    *cout << "1 - Story Mode\n";
    *cout << "2 - Jedi Knight\n";
    *cout << "3 - Jedi Master\n";
    *cout << "4 - Jedi Grand Master\n";
    */

    enum Diffuculty
    {
        StoryMode,
        JediKnight,
        JediMaster,
        JediGrandMaster
    };

    int playerChoice;
    cout << "Choice: ";
    cin >> playerChoice;

    switch (playerChoice)
    {
    case StoryMode:
        cout << "You picked Story Mode. \n";
        break;

    case JediKnight:
        cout << "You picked Jedi Knight. \n";
        break;

    case JediMaster:
        cout << "You picked Jedi Master. \n";
        break;

    case JediGrandMaster:
        cout << "You picked Jedi Grand Master. \n";
        break;

    default:
        cout << "You made an illegal choice Sithspit!\n";
        break;
    }

    return 0;
}