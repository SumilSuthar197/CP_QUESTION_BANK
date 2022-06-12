#include<stdio.h>
int fn(int x,int n)
{
    if(n==0||x==1)
    return 1;
    else
    return x*fn(x,n-1);
}
void main()
{
    int x,n,result;
    printf("enter the value of x and n:");
    scanf("%d%d",&x,&n);
    result=fn(x,n);
    printf("the value of %d raised to %d is %d",x,n,result);

}