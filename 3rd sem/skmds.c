#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    int marks;
    char address[100];
};
void print(struct student s1[]);
int main()
{
    int i;
struct student s[5];
for(i=0;i<5;i++)
{
    printf("\nenter name,roll,marks,address of student:");
    scanf("%s %d %d %s",&s[i].name,&s[i].roll,&s[i].marks,&s[i].address);
}
    for(i=0;i<5;i++)
    {
        printf("\n%s   \t",s[i].name);
        printf("%d   \t",s[i].roll);
        printf("%d   \t",s[i].marks);
        printf("%s   \t",s[i].address);
    }
print(s);
return 0;
}
void print(struct student s1[])
{
    int i; printf("name:           roll:          marks:         address:\n");
    for(i=0;i<5;i++)
    {
        printf("\n%s  \t \t \t",s1[i].name);
        printf("%d   \t\t \t",s1[i].roll);
        printf("%d   \t\t \t",s1[i].marks);
        printf("%s   \t\t \t",s1[i].address);
    }
    
}