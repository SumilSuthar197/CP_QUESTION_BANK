#include<stdio.h>
void main()
{
    int i,j,r,c,common=0;
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
            if((i==j)||((i+j)==(r-1)))
            {
                common=common+a[i][j];
            }
        }
    }
    
    printf("the sum of diagonal element of both sides is %d",common);
}
