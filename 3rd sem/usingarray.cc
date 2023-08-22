#include<iostream>
using namespace std;
class xyz
{

    private:
    int roll ;
    char name[50];

    public :

     void getdata();
  void  showdata();

};
void xyz :: getdata()
{

    cout<<"\nsenter the name of student:";
    cin>>name;
    cout<<"\nenter the roll number:";
    cin>>roll;
}
void xyz :: showdata()
{
    cout<<"the name of the student:"<<name;
    cout<<"\nthe roll no of the studdent:"<<roll;
}
int  main (){

    int arr[100],n,i;
    cout<<"enter the no of getdata:";

    for(i=0;i<=n;i++)
    {
         }



    
    return 0;

}