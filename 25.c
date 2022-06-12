#include<stdio.h>
void fn(int x,int n)
{
    int i,result=1;
    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("the value of %d raised to %d is %d",x,n,result);

}
void main()
{
    int x,n;
    printf("enter the value of x and n:");
    scanf("%d%d",&x,&n);
    fn(x,n);
}