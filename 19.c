#include<stdio.h>
void main()
{
    int i,n,large,a[100];
    printf("enter the number of elements in array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the element:");
        scanf("%d",&a[i]);
    }
    large=a[0];
    for(i=1;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
    printf("\nthe largest element in array is %d",large);

}