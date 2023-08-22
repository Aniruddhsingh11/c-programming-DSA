#include <stdio.h>
struct employee
{ 
    char name[100];
    char address[100];
    int age;
    int salary;
};
int main()
{
    struct employee b[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter name,address,age,salary of employee %d\n", i + 1);
        scanf("%s %s %d %d", b[i].name, &b[i].address, &b[i].age, &b[i].salary);
    }
    int avg_sal, total_sal;
    for (i = 0; i < 5; i++)
    {
        total_sal += b[i].salary;
    }
    avg_sal = total_sal / 5;
    printf("Average salary: %d\n", avg_sal);
}