#include<stdio.h>
void main()
{
    int a=0,b=1,c,n,i;
    printf("enter the number of term in fibonacci series:");
    scanf("%d",&n);
    printf("\nfibonacci series:\n");
    printf("%d\t%d",a,b);


    for(i=0;i<n-2;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
