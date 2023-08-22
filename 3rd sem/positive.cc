#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
	cout << " enter number is positive, negative or zero :\n"; 
	cout << " Input a number : ";
    cin >> num1;
    if(num1 > 0)
    {
        cout << " The entered number is positive.\n";
    }
    else if(num1 < 0)
    {
        cout << " The entered number is negative.\n";
    }
    else
    {
        cout << " The number is zero.\n";
    }
    return 0;
}