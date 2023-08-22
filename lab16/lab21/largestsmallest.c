#include<stdio.h> 
#include<stdlib.h> 
 int main() 
 { 
   int n,*p,i, min , max ; 
   printf("ENTER THE NUMBER OF ELEMENTS\n"); 
   scanf("%d",&n); 
   p=(int *)malloc(n*sizeof(int)); 
   printf("ENTER THE ELEMENTS\n"); 
   for(i=0;i<n;i++) 
   scanf("%d",p+i); 
   min=*p; 
   max=*p; 
   for(i=0;i<n;i++) 
   { 
   if(*(p+i) < min) 
   min=*(p+i); 
   if(*(p+i) > max) 
   max=*(p+i); 
   } 
   printf("LARGEST DIGIT: %d \nSMALLEST DIGIT : %d",max, min); 
   return 0; 
 } 