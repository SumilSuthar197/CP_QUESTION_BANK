#include<stdio.h>

int lcm(int a,int b)
{
    static int k=0;
    k=k+b;
    if((k%a==0)&&(k%b==0))
    {
        return k;
    }
    else
    {
        return lcm(a,b);
    }
     
}

void main() 
{
    int a,b,result;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    result=lcm(a,b);
    printf("the lcm of number %d and %d is %d",a,b,result);
}
