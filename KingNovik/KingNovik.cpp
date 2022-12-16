// KingNovik.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char diffchoice;

    cout << "Choose your difficulty:" << endl;
    cout << "1: I'm too young to die!" << endl;
    cout << "2: Hey, not too rough!" << endl;
    cout << "3: Hurt me plenty!" << endl;
    cout << "4: Ultra Violence!" << endl;
    cout << "5: NIGHTMARE" << endl;

    cin >> diffchoice;

    switch (diffchoice)
    {
    case '1':
        cout << "John Romero would be disappointed" << endl;
        break;

    case '2':
        cout << "You'll make this look easy" << endl;
        break;
     
    case '3':
        cout << "Have fun with the Archviles!" << endl;
        break;

    case '4':
        cout << "The gentleman's way to play Doom" << endl;
        break;

    case '5':
        cout << "Hitscan hell, good luck Slayer" << endl;
        break;

    default:
        cout << "Don't recognise that one" << endl;
        break;
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
