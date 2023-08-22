#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[100],rev[100]={0};char*p,*p1;
    int i,j,l=0;
    p=&s[100];
    p1 =&rev[100];
    printf("enter a string\n");
    gets(s);
    for(i=0;(*p+i)!=NULL;i++)
    {
        l=l+1;
    }
    for(i=l-1,j=0;i>=0;i--,j++){

          *(p1+j) =* (p+i);
          if(strcmp(p,p1)==0){

            printf("%s the string is palindorme",s);
          }
          else {
            printf("%s the string is not palindrome",s);
          }

    }
    return 0;
}
        
    
    
    


// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     int i, len, temp=0;
//     int flag = 0;
//     printf("Enter a string:");
//     scanf("%s", str);
//     len = strlen(str);
//     for(i=0;i < len ;i++){
//         if(str[i] != str[len-i-1]){
//             temp = 1;
//         break;
//    }
// }
    
//     if (temp==0) {
//         printf("String is a palindrome");
//     }    
//     else {
//         printf("String is not a palindrome");
//     }
//     return 0;
// } 
// #include <stdio.h>
// #include <string.h>

// int checkpalindrome(char *s)
// {
//     int i,c=0,n;
//     n=strlen(s);
// 	for(i=0;i<n/2;i++)
//     {
//     	if(s[i]==s[n-i-1])
//     	c++;

//  	}
//  	if(c==i)
//         return 1;
//     else
//         return 0;

 	
	  
//  }
// int main()
// {

//     char s[1000];  
   
//     printf("Enter  the string: ");
//     gets(s);
    
 
//     if(checkpalindrome(s))
//  	    printf("string is palindrome");
//     else
//         printf("string is not palindrome");
 
     
     
// }