#include<stdio.h>
void main() //final v2
{
    int i,j,r,c,sum=0;
    int a[100][100],t[100][100];
    printf("Enter the no of rows and column:");
    scanf("%d%d",&r,&c);
    printf("\nEnter the matrix A");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nEnter the element:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=a[i][j];
        }
    }
    printf("\nTranspose of Matrix is\n");
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
}
