#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("Enter 1st number : ");
    scanf("%d", &num1);

    printf("\nEnter 2nd number : ");
    scanf("%d", &num2);

    printf("\nEnter 3rd number : ");
    scanf("%d", &num3);

    if(num1 >= num2) {

        if(num1 >= num3) {

            printf("\n%d is largest number", num1);

        } else {

            printf("\n%d is largest number", num3);
        }

    } else {

        if(num2 >= num3) {

            printf("\n%d is largest number", num2);

        } else {

            printf("\n%d is largest number", num3);
        }

    }

    return 0;
}
