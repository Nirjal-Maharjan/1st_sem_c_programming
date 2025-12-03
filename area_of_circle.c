#include<stdio.h>
#define pi 3.14
int main()
{

    float area,radius;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area of circle having radius %.2f is %.2f",radius,area);
}
