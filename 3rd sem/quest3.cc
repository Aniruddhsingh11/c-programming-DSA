#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial = factorial * i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}