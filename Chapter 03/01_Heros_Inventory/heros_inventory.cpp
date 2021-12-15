// Hero's Inventory
// Demonstrates Arrays

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS] = {"sword", "armor", "shield"};
    int numItems = sizeof(inventory) / sizeof(inventory[0]);
    
    cout << "Your items: \n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << "\n You trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout << "\nYour items: \n";
    for (int i = 0; i < numItems; ++i)
    {
        cout << inventory[i] << endl;
    }

    cout << "\n The item name  '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it. \n";

    return 0;
}