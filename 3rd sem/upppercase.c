//upper case 
#include<stdio.h>
int main ()
{
    char ch;
    printf("enter the character :");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='z')
    {
      printf("the character is upper case character :\n");
    }
    else if(ch>='a'&& ch<='z')
    {
        printf("the character is lower case :\n");
    }
    else{
        printf("this is not a character:\n");
    }
    return 0;
}  
