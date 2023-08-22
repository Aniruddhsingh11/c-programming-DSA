#include <stdio.h>
struct student {
char name[30];
int roll;
int marks;
char city[30];
} stu[10];

int main() {
printf("enter below information:\n");
int i;

for (i = 0; i < 10; ++i) { 
 printf("Enter student name: ");
 fgets(stu[i].name, sizeof(stu[i].name), stdin);

 printf("Enter student roll number: ");
 scanf("%d", &stu[i].roll);

 printf("Enter student marks: ");
 scanf("%f", &stu[i].marks);

 printf("Enter student city: ");
 fgets(stu[i].city, sizeof(stu[i].city), stdin);
 printf("\n");

}

printf("Displaying student Information:\n");
for (i = 0; i < 10; ++i) { 
 printf("Name: ");
 printf("%s", stu[i].name);
 printf("Roll number: %d\n", stu[i].roll);
 printf("Marks: %.1f\n", stu[i].marks);
 printf("City: ");
 printf("%s", stu[i].city);
}
return 0;
}