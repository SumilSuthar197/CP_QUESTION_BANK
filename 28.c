#include<stdio.h>
void main()
{
    int i,a[10],sum=0;
    float avg;
    for(i=0;i<10;i++)
    {
        printf("\nenter the number");
        scanf("%d",&a[i]);
    }
    printf("\nthe entered number are ");
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i]; 
    }
    avg=(float)sum/10;
    printf("the average of entered number is %f ",avg);
}