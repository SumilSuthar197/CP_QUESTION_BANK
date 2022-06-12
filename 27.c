#include<stdio.h>
void main()
{
    char a[30];
    int i,j,length=0,temp;
    printf("enter the string: ");
    gets(a);
    while(a[length]!='\0')
    {
        length++;
    }
    printf("%d",length);
    for(i=0;i<length-2;i++)
    {
        temp=a[i];
        a[i]=a[length-1-i];
        a[length-1-i]=temp;
    }
    printf("\nstring after reverse: ");
    printf("%s",a);
}