#include <iostream>
using namespace std;
int main()
{
    int i,num, oddSum=0,evenSum=0,oddCount=0,evenCount=0;   
double evenAvg,oddAvg;                     
    cout<<"Enter the value for num: ";     
    cin>>num;
    for(i=1; i<=num; i++){          
    if(i % 2==0){               
        evenSum=evenSum+i;
        evenCount++;
    }
    else{                            
        oddSum=oddSum+i;
        oddCount++;
    }
    } 
evenAvg=evenSum/evenCount;                      
oddAvg=oddSum/oddCount; 
cout<<"Average of odd numbers are: "<<oddAvg;    
cout<<"\n";
cout<<"Average of even numbers are: "<<evenAvg;
    return 0;
}