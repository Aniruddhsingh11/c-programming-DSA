#include<iostream>
using namespace std;

int main (){

    int a,b,c;

    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<"enter the value of c";
    cin>>c;
    if(a>b){

        if(a>c){

            cout<<a<<endl;
        }
        else {
            cout<<c <<endl;
        }

    }
    else {
        if(b>c){

            cout<<b<<endl;
        }
        else {

            cout<<c<<endl;
        }
    }

       
    
}
