#include<stdio.h>
void main()
{
    int i,j,r,c;
    int a[100][100],b[100][100],d[100][100];
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
    printf("\nenter the matrix B");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nenter the element:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nthe addition of two matrix is:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }




}