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

    xyz c1,c2,c3,c4,c5;

    
    c1.getdata();
    c2.getdata();
    c3.getdata();
    c4.getdata();
    c5.getdata();
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
    c5.showdata();

    return 0;

}