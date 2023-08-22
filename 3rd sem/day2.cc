// #include<stdio.h>
// struct student{

//     int roll;
//     int marks;
//     char name[100];
//     char address[100];

// };
// int display (struct student s);
// int main() {

//       struct student s1;
//       printf("enter the name of student");
//       scanf("%s",s1.name);
//       printf("enter the marks of student: ");
//       scanf("%d",&s1.marks);
//       printf("enter the roll no of student:");
//       scanf("%d",&s1.roll);
//       printf("enter the address of the student :");
//       scanf("%s",s1.address);

//       struct student s2;
//        printf("enter the name of student");
//       scanf("%s",s2.name);
//       printf("enter the marks of student: ");
//       scanf("%d",&s2.marks);
//       printf("enter the roll no of student:");
//       scanf("%d",&s2.roll);
//       printf("enter the address of the student :");
//       scanf("%s",s2.address);

//       struct student s3;

//       printf("enter the name of student");
//       scanf("%s",s3.name);
//       printf("enter the marks of student: ");
//       scanf("%d",&s3.marks);
//       printf("enter the roll no of student:");
//       scanf("%d",&s3.roll);
//       printf("enter the address of the student :");
//       scanf("%s",s3.address);

//       struct student s4;
//        printf("enter the name of student");
//       scanf("%s",s4 .name);
//       printf("enter the marks of student: ");
//       scanf("%d",&s4.marks);
//       printf("enter the roll no of student:");
//       scanf("%d",&s4.roll);
//       printf("enter the address of the student :");
//       scanf("%s",s4.address);

//       struct student s5;
//        printf("enter the name of student");
//       scanf("%s",s5.name);
//       printf("enter the marks of student: ");
//       scanf("%d",&s5.marks);
//       printf("enter the roll no of student:");
//       scanf("%d",&s5.roll);
//       printf("enter the address of the student :");
//       scanf("%s",s5.address);
//       display(s4);
      

//       return 0;
// }
// int display (struct student s){
// printf("name: %s",s.name);
//     printf("marks: %d",&s.marks);
//     printf("roll:%d",&s.roll);
//     printf("address:%s",s.address);

// }
#include <iostream>
using namespace std;

int main() {

  int num1, num2, sum;
    
  cout << "Enter two integers: ";
  cin >> num1 >> num2;


  sum = num1+ num2;

  cout << num1 << " + " <<  num2 << " = " << sum;     

  return 0;
}
