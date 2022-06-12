#include<stdio.h>
void main()
{
    int i,n,small,a[100];
    printf("enter the number of elements in array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the element:");
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
    printf("\nthe smallest element in array is %d",small);

}