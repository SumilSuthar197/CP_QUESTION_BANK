#include<stdio.h>
void main()
{
    char a[100];\
    int l=0,i;
    printf("Enter the word: ");
    gets(a);
    
    while(a[l]!='\0')
    {
        l++;
    }
    printf("The length of string is %d",l);
    for(i=0;i<=(l-1)/2;i++)
    {
        if(a[l-i-1]!=a[i])
        break;

    }
    if(i==((l-1)/2)+1)
        printf("\nThe string is a plaindrome.");
    else
        printf("\nThe string is not a plaindrome.");

}