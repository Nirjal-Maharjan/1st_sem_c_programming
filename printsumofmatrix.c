#include<stdio.h>
int main()

{

    int a[3][3],i,j,sum=0;
    printf("Enter the matrix element:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            printf("%d    ",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

            sum=sum+a[i][j];
        }

    }
    printf("The sum is %d",sum);

}
