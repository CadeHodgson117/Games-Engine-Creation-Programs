// inventory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    const int TotalItems = 4;
    int NumberItems = 0;
    string inventory[4];
    inventory[0] = "Sword";
    inventory[1] = "Battle Axe";
    inventory[2] = "Healing Potion";
    inventory[3] = "Dagger";
    cout << "Would you like to swap the dagger for a staff?" << endl;

    char answer;
    cin >> answer;

    if (answer == 'y' || 'Y')
    {
        inventory[3] = "Wizard Staff";
        
        int i = 0;
        cout << "Your inventory now contains:" << endl;
        cout << inventory[i] << endl;
        while(i < 4)
        {
            i++;
            cout << inventory[i] << endl;
        }
    }

    else if (answer == 'n' || 'N')
    {
        int i = 0;
        cout << "You have left the Staff behind" << endl;
        cout << "Your Inventory contains:" << endl;
        cout << inventory[i] << endl;
        while (i < 4)
        {
            i++;
            cout << inventory[i] << endl;
        }
    }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
