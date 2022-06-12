#include<stdio.h>
void main()
{
    int i,j,k,r1,c1,r2,c2;
    int a[100][100],b[100][100],d[100][100];
    printf("enter the no of rows and column of matrix A:");
    scanf("%d%d",&r1,&c1);
    printf("enter the no of rows and column of matrix B:");
    scanf("%d%d",&r2,&c2);

    printf("\nenter the matrix A");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\nenter the element:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter the matrix B");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\nenter the element:");
            scanf("%d",&b[i][j]);
        }
    }
    
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                d[i][j]=0;
                for(k=0;k<c1;k++)
                {
                   d[i][j]=d[i][j]+a[i][k]*b[k][j]; 
                }
            }
        }

        printf("\nthe multiplication of two matrix is:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",d[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("the matrix multiplication is not possible");
    }
}