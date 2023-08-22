#include<stdio.h>
struct student{

    int roll;
    int marks;
    char name[100];
     int age ;

};
int main() {

      struct student s1;
      printf("enter the name of student\n:");
      scanf("%s",s1.name);
      printf("enter the marks of student: ");
      scanf("%d",&s1.marks);
      printf("enter the roll no of student:");
      scanf("%d",&s1.roll);
      printf("enter the age of the student :");
      scanf("%d",&s1.age);

printf("name: %s\n",s1.name);
    printf("marks: %d\n",s1.marks);
    printf("roll:%d\n",s1.roll);
    printf("age:%d\n",s1.age);
return 0;
}