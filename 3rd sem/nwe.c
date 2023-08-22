// #include<stdio.h>
// int main()
// {
//     int arr[10], i, element;
//     printf("Enter 5 Array Elements: ");
//     for(i=0; i<5; i++)
//         scanf("%d", &arr[i]);
//     printf("\nEnter Element to Insert: ");
//     scanf("%d", &element);
//     arr[i] = element;
//     printf("\nThe New Array is:\n");
//     for(i=0; i<6; i++)
//         printf("%d  ", arr[i]);
    
//     return 0;
// }
include <stdio.h>
void main()
{
    int position, i, n, value,ch, arr[100];
    printf("C Program to insert element at end of Array\n");
    printf("First enter number of elements you want in Array\n");
    scanf("%d", &n);
    arr[n];
   for(i = 0; i < n; i++)
    {
        printf("Please give value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Let's Insert Element at end \n ");
    printf("Please give a number to insert at end \n");
    scanf("%d", &value);
    arr[n] = value;
    printf("Element %d is inserted at %d index \n",value,n);
    printf("New Array is \n ");
     
    for(i = 0; i < n+1; i++)
    {
       printf("%d \t",arr[i]);
    }
}