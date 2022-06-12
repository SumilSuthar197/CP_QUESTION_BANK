#include<stdio.h>
void main()
{
    int a,b,c,large,largest;
    printf("enter the three number");
    scanf("%d%d%d",&a,&b,&c);
    large=(a>b)?a:b;
    largest=(large>c)?large:c;
    printf("the largest number is %d",largest);
}