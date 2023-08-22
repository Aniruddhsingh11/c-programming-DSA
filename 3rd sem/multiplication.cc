#include <iostream>
using namespace std;

int main()
{
    int no;
    cout << "Enter a number :" << endl;

    cin >> no;
    cout << "Multiplication table for " << no << " : " << endl;

    for (int i = 1; i < 11; i++)
    {
        cout << no << " * " << i << " = " << no * i << endl;
    }
}