// #include <stdio.h>
// int main (){

//     int n,i,j;
//     scanf("%d",&n);
//     for(i=n;i>=1;i--){

//         for(j=n;j>i;j--)
//         printf("%d\t",j);
//     }
// }
#include <stdio.h>
int main (){

    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){

        for(j=n;j>i;j--)
        printf("%d\t",j);
        for(j=1;j<=2*i-1;j++)
        printf("%d\t",i);
    }
}