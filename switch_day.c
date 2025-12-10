#include<stdio.h>
int main()
{
    int day;
    printf("\n Enter a number from 1 to 7:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("\nSunday");
        break;
        case 2:
        printf("\nMOnday");
        break;
        case 3:
        printf("\nTuesday");
        break;
        case 4:
        printf("\nWednesday");
        break;
        case 5:
        printf("\nThursday");
        break;
        case 6:
        printf("\nFriday");
        break;
        case 7:
        printf("\nSaturday");
        break;
        default:
        printf("Invalid numnber.");
        break;
    }
    return 0;
}