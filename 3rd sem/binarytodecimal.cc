

// #include <iostream>
// #include <cmath>

// using namespace std;

// int convert(long long);

// int main() {
//   long long n;
//   cout << "Enter a binary number: ";
//   cin >> n;
//   cout << n << " in binary = " << convert(n) << " in decimal";
//   return 0;
// }

// int convert(long long n) {
//   int dec = 0, i = 0, rem;

//   while (n!=0) {
//     rem = n % 10;
//     n /= 10;
//     dec += rem * pow(2, i);
//     ++i;
//   }

//   return dec;
// }
#include<iostream>
using namespace std;
int main()
{
    int binnum, decnum=0, i=1, rem;
    cout<<"Enter any Binary Number: ";
    cin>>binnum;
    while(binnum!=0)
    {
        rem = binnum%10;
        decnum = decnum + (rem*i);
        i = i*2;
        binnum = binnum/10;
    }
    cout<<"\n Decimal Value = "<<decnum;
    cout<<endl;
    return 0;
}