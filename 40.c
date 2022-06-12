#include<stdio.h>
void main()
{
    int i,j,temp,a[10];
    for(i=0;i<10;i++)
    {
        printf("enter the element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=8;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting elements in ascending form\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
        
    }
}