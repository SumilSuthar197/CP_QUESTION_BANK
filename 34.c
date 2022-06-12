#include<stdio.h>
struct book 
{
    char name[30],author[30];
    int price,pgno;
};
void main()
{
    struct book a[100];
    int i,n;
    printf("enter the number of books data to be stored:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter book name, author name ,page no and price of book:");
        scanf("%s%s%d%d",a[i].name,a[i].author,&a[i].pgno,&a[i].price);
    }
    printf("\nname\tauthor\tpageno\tprice\n");
    printf("-------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%s\t%d\t%d\n",a[i].name,a[i].author,a[i].pgno,a[i].price);
    }
}