// #include<stdio.h>
// #include<stdlib.h>
// int main (){

//     float *ptr;
//     ptr = (float *) malloc(5 *sizeof(float));
     
//      ptr[0] = 10.0;
//      ptr[1] = 11.2;
//      ptr[2] = 12.4;
//      ptr[3] = 13.5;
//      ptr[4] = 11.7;

//      for(int i=0;i<5;i++){


//         printf("%f\n",ptr[i]);
//      }
// }
#include<stdio.h>
#include<stdlib.h>
int main (){

int *ptr;
int n;
printf("enter the value of n:");
scanf("%d",&n);
ptr = (int *) calloc(n,sizeof(int));
for(int i=0;i<n;i++){

    printf("%d \n",ptr[i]);
}


}