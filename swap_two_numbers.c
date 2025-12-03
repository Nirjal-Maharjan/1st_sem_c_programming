#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("%d%d",a,b);

}
