#include <iostream>
#include <math.h>
using namespace std;

    int main()
    {
    	float side1, side2, side3, area, s;
		cout << "\n\n Find the area of any triangle \n";	

        cout<<"  1st side  of the triangle : ";
    	cin>>side1;
        cout<<" 2nd side  of the triangle : ";
    	cin>>side2;
        cout<<"  3rd side  of the triangle : ";
    	cin>>side3;	
		s = (side1+side2+side3)/2;
		area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        cout<<" The area of the triangle is : "<< area << endl;
        cout << endl;
        return 0;
    }
   