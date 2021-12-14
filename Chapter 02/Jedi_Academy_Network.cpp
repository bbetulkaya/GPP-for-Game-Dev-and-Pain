#include <iostream>
#include <string>

using namespace std;

int main()
{
    string username;
    string password;
    bool success;

    cout << "\tJedi Academy's Network\n";
    do
    {
        cout << "\nUsername: ";
        cin >> username;

        cout << "\nPassword: ";
        cin >> password;

        if (username == "MasterOfSarcasm" && password == "HelloThereSatine")
        {
            cout << "\n Hello there, Master Obi-wan Kenobi";
            success = true;
        }
        else if (username == "TheChosenOne" && password == "padmeisnotmywife")
        {
            cout << "\n Welcome back, Jedi Knight Anakin Skywalker";
            success =  true;
        }
        else
        {
            cout << "\nYour login failed.";
            success = false;
        }
    }while(!success);

    return 0;
}