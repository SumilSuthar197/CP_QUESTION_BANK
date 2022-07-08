#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
void main()
{
    int n,f;
    printf("enter the number:");
    scanf("%d",&n);
    f=fact(n);
    printf("\nthe factorial of number %d is %d",n,f);
}
