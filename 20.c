#include<stdio.h>
void main()
{
    int i,j,r,c,sum=0;
    int a[100][100];
    printf("enter the no of rows and column:");
    scanf("%d%d",&r,&c);

    printf("\nenter the matrix A");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nenter the element:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("\nthe sum of all elements of matrix is %d",sum);
}