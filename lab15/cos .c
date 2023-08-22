// cos series
#include <stdio.h>
#include<math.h>
const double PI = 3.142;

double series_sum(double x, int n) {
    x = x * (PI / 180.0);
    double result = 1;
    double s = 1, fact = 1, pow = 1;
    for (int i = 1; i < 5; i++) {
        s = s * -1;
        fact = fact * (2 * i - 1) * (2 * i);
        pow = pow * x * x;
        result = result + s * pow / fact;
    }
    return result;
}
//main function
int main() {
    float x ;
    printf("Enter the value of x=");
    scanf("%f",&x);

    int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    
    printf("%f\n", series_sum(x, n));  
    return 0;
}