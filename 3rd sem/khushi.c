// #include <stdio.h>
// #include<math.h>
// //function to find distance bewteen 2 points
// void two_dis(float x1, float y1, float x2, float y2) {
//    float dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
//    printf("Distance between 2 points are : %f", dis);
//    return;
// }
// int main() {
//    float x1 = 4;
//    float y1 = 9;
//    float x2 = 5;
//    float y2 = 10;
//    two_dis(x1, y1, x2, y2);
//    return 0;
// }#include <stdio.h>
#include <stdio.h>
#include <math.h>

struct Point {
    int x, y;
};
double Distance(struct Point a, struct Point b)
{
    double distance;
    distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y-b.y) *(a.y-b.y));
    return distance;
}

int main()
{
    struct Point a, b;
    printf("Enter coordinate of point a: ");
    scanf("%d %d", &a.x, &a.y);
    printf("Enter coordinate of point b: ");
    scanf("%d %d", &b.x, &b.y);
    printf("Distance between a and b: %lf\n", Distance(a, b));


    return 0;
}





