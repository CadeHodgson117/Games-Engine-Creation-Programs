// odds and evens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool EvenCheck (int inputnum)
{
    

    if (inputnum % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

void outputResults(int numOdd, int numEven, int OddTotal, int EvenTotal)
{
    cout << "The number of odd numbers is " << numOdd << endl;
    cout << "The number of even numbers is " << numEven << endl;
    cout << "The total of odd numbers is " << OddTotal << endl;
    cout << "The total of even numbers is " << EvenTotal << endl;
    return;
    
}

int main(bool Check)
{
    
    int inputnum;
    int numOdd = 0;
    int numEven = 0;
    int OddTotal = 0; 
    int EvenTotal = 0;
    int process = 0;
    cout << "Please input 10 numbers" << endl;
   
    for (int i = 0; i < 10; i++)
    {
        cin >> inputnum;
        EvenCheck(inputnum);
        
        if (EvenCheck(inputnum) == true)
        {
            numEven++;
            EvenTotal = EvenTotal + inputnum;
            process++;
        }
        else
        {
            numOdd++;
            OddTotal = OddTotal + inputnum;
            process++;
        }
        
        
        
    }
    if (process = 10)
    {
        outputResults(numOdd, numEven, OddTotal, EvenTotal);
    }
    
    
    return inputnum, numOdd, numEven, OddTotal, EvenTotal, Check;
     
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
