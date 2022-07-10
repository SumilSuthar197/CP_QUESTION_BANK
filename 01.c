#include<stdio.h>
void main()
{
    int i,j, n = 5;
    struct book
    {
        char title[30];
        char author[30];
        int price;
    };
    struct book a[n],temp;
    for (i=0;i<n;i++)
    {
        printf("Enter Title, Author and Price of Book %d\n", i+1);
        scanf("%s %s %d", &a[i].title,&a[i].author,&a[i].price);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if (a[j].price>a[j+1].price)
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=a[i];
            }
        }
    }
    printf("Title\tAuthor\tPrice of Book\n");
    printf("---------------------------------------\n");
    for (i=0;i<n;i++)
    {
        printf("%s\t%s\t%d\t\n", a[i].title, a[i].author,a[i].price);
    }
}
