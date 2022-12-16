// strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string prompt = "Do you know who loves C++ XX does!";
    cout << prompt << endl; 
    string name1;
    string name2;
    cout << "Please enter your name" << endl;
    getline(cin, name1);
    strlen(name1.c_str());
    prompt.insert(27, name1, 0, name1.length());
    

    cout << prompt << endl;

    cout << "Please enter another longer name" << endl;

    getline(cin, name2);
    strlen(name2.c_str());

    
    if(strlen(name1.c_str()) < strlen(name2.c_str()))
    {
        prompt.replace(26, 6, name2);

        cout << prompt << endl;
    }
    else 
    {
        cout << "That name is not longer, goodbye." << endl;
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
