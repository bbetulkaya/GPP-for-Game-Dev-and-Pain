#include <iostream>
using namespace std;

int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;

    short lives, aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    double engineTemp = 6572.78;

    cout << "\n Score: " << score << endl;
    cout << "Distance: " << distance << endl;
    cout << "Play Again: " << playAgain << endl;

    cout << "Lives: " << lives << endl;
    cout << "Aliens Killed: " << aliensKilled << endl;
    cout << "Engine Temperature: " << aliensKilled << endl;

    // Getting user input "cin"
    int fuel;
    cout << "\n How much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\n Bonus: " << bonus << endl;

    return 0;




}