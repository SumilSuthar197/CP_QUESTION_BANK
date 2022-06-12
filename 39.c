#include<stdio.h>
void main()
{
    int choice;
    printf("enter the month number: ");
    scanf("%d",&choice);
    printf("\nthe name of the month is");
    switch(choice)
    {
        case 1:printf("\njanuary");
        break;
        case 2:printf("\nfebruary");
        break;
        case 3:printf("\nmarch");
        break;
        case 4:printf("\napril");
        break;
        case 5:printf("\nmay");
        break;
        case 6:printf("\njune"); 
        break;
        case 7:printf("\njuly");
        break;
        case 8:printf("\naugust");
        break;
        case 9:printf("\nseptember");
        break;
        case 10:printf("\noctober");
        break;
        case 11:printf("\nnovember");
        break;
        case 12:printf("\ndecember");
        break;
        default: printf("\ninvalid input entered number should be between 1 to 12");
        break;
    }
}