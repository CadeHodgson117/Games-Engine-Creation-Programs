// if this then that.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int weather;
    int temperature;
    cout << "Please tell me if it is raining with '1' or snowing with '2'" << endl;
    cin >> weather;

    cout << "What is the temperature in Celsius?" << endl;
    cin >> temperature;
    
    if (weather == 1)
    {
        if (temperature > 15)
        {
            cout << "Wear a light raincoat" << endl;
        }
        else
        {
            cout << "Wear a thick coat" << endl;
        }
    }
    else if (weather == 2)
    {
        if (temperature > 5)
        {
            cout << "Wear something warm" << endl;
        }
        else if (temperature > 0)
        {
            cout << "Wrap up well" << endl;
        }
        else
        {
            cout << "Stay home" << endl;
        }
    }
    else
    {
        cout << "Have a nice day since there is no snow or rain!" << endl;
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
