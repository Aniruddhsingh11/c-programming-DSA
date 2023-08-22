#include<stdio.h>
struct marks
    {
        char name[20];
        char gender[5];
        float eng;
        float math;
        float phy;
        float chem;
        float comp;
        int age;
    };
int main()
{
    struct marks b[10];
    float sum[10];
    float s;

    int i;

    for(i=0;i<=1;i++)
    {
        printf("ENTER NAME OF STUDENT,GENDER,AGE AND MARKS IN 5 SUBJECTS\n");
        scanf("%s%s%d%f%f%f%f%f",b[i].name,b[i].gender,&b[i].age,&b[i].eng,&b[i].math,&b[i].phy,&b[i].chem,&b[i].comp);
        s=b[i].math+b[i].eng+b[i].phy+b[i].chem+b[i].comp;
        sum[i]=s;
    }
    printf("INFORMATION OF FAILED STUDENT\n");
    for(i=0;i<=1;i++)
    {
        if(b[i].math<40)
        {
            printf("Name:%s Gender:%s Age:%d Total:%.2f,Failed in Maths\n",b[i].name,b[i].gender,b[i].age,sum[i]);
        }
        if(b[i].eng<40)
        {
            printf("Name:%s Gender:%s Age:%d Total:%.2f,Failed in English\n",b[i].name,b[i].gender,b[i].age,sum[i]);
        }
        if(b[i].phy<40)
        {
            printf("Name:%s Gender:%s Age:%d Total:%.2f,Failed in Physics\n",b[i].name,b[i].gender,b[i].age,sum[i]);
        }
        if(b[i].chem<40)
        {
            printf("Name:%s Gender:%s Age:%d Total:%.2f,Failed in Chemistry\n",b[i].name,b[i].gender,b[i].age,sum[i]);
        }
        if(b[i].comp<40)
        {
            printf("Name:%s Gender:%s Age:%d Total:%.2f,Failed in Computer\n",b[i].name,b[i].gender,b[i].age,sum[i]);
        }
    }
}