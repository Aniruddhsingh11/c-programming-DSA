#include <stdio.h>
int main()
{
    int n,i;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    char s[100][100];
    for(i=0;i<n;i++)
    {
        printf("enter element%d\n",i+1);
        scanf("%s",&s[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%s",s[i]);
    }
    return 0;
}