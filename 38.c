#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    else{
        return gcd(b%a,a);
    }
}
void main() 
{
    int a,b,result;
    printf("enter two number: ");
    scanf("%d%d",&a,&b);
    result=gcd(a,b);
    printf("the gcd of %d and %d is %d",a,b,result);
} 