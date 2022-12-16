// starry output.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int starlines;
    cout << "How many lines of stars do you want between 1 and 10?" << endl;
    cin >> starlines;
    if (starlines > 10)
    {
        starlines == 10;
    }
    int starnum = 1;
    char star = '*';
    if (starlines == 1)
        {
            cout << star << endl;
        }
        else
        {

            for (int i = 0; i < starlines; i++)
            {
                for (int j = 0; j < starnum; j++)
                {
                    cout << star;

                }

                cout << endl;
                starnum++;

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
