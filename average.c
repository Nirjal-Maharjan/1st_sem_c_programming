#include<stdio.h>
int main(){
float average,num1,num2,num3;
printf("Enter first number:\n");
scanf("%f",&num1);
printf("Enter second number:\n");
scanf("%f",&num2);
printf("Enter third number:\n");
scanf("%f",&num3);
average=(num1+num2+num3)/3;
printf("Average of three numbers is %.2f",average);
}
