#include<stdio.h>
int main()
{
    float math,c,english,nepali,physics;
    float percentage,total;
    printf("\nEnter marks of Math:");
    scanf("%f",&math);
    printf("\nEnter marks of C:");
    scanf("%f",&c);
    printf("\nEnter marks of English:");
    scanf("%f",&english);
    printf("\nEnter marks of Nepali:");
    scanf("%f",&math);
    printf("\nEnter marks of Physics:");
    scanf("%f",&physics);
    total=math+c+english+nepali+physics;
    percentage=total/5;
    printf("YOu got %f",percentage);
    if(percentage>=80)
    {
        printf("Distinction");
    }
    else if(percentage>=60 && percentage<80)
    {

        printf("First division");
    }
    else if(percentage>=45 && percentage<60)
    {
        printf("Second division");

    }
    else if(percentage>=32 && percentage<45)
    {

        printf("third division");
    }
    else {
        printf("failed");
    }

}
