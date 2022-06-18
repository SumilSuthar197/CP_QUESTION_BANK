#include<stdio.h>
void main()
{
    int i,j,r,c;
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

    printf("\nmatrix A is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nmatrix A after transpose\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}
