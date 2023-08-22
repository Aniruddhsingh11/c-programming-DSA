#include <iostream>
using namespace std;

int main() {
  int n ;
  cout<< "enter a number";
  cin>>n;
  int mul =1;
  while(n!=0){

    int rem = n%10;
    mul = mul*rem;
    n = n/10;
  }
  cout <<"the multiplication of digits is "<<mul<<endl;
  return 0;
}