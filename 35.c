#include<stdio.h>
void main()
{
    int i,j,r,sum=0;
    int a[100][100];
    printf("enter the no of rows");
    scanf("%d",&r);

    printf("\nenter the matrix A");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("\nenter the element:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if((i==j)||((i+j)==(r-1)))
            {
                sum=sum+a[i][j];
            }
        }
    }

    printf("the sum of diagonal element of both sides is %d",sum);
}
