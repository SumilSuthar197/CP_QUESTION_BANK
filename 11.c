#include<stdio.h>
void main()
{
    int a=0,b=1,c=0,n,i=0;
    printf("enter the number of term in fibonacci series:");
    scanf("%d",&n);
    printf("\n fibonacci series:\n");
    printf("%d\t%d",a,b);

    while(i<n)
    {
        printf("\t%d",c);
        a=b;
        b=c;
        c=a+b;
        i++;
    }
}
