#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("enter the number");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==1)
    {
        printf("\nthe number %d is a prime number",n);
    }
    else
    {
      printf("\nthe number %d is not a prime number",n);  
    }
}