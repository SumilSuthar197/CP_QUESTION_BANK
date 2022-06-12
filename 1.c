#include<stdio.h>
struct data
{
    int p;
    char a[30],t[30];
    //p=price,a=author name,t=title name
};

void main()
{
    struct data d[5],temp;
    int i,j;

    for ( i = 0; i < 5; i++)
    {
        printf("\nenter Title ,Author name and price of book:");
        scanf("%s%s%d",d[i].t,d[i].a,&d[i].p);
    }
    
    for ( i = 0; i <=4; i++)
    {
        for(j=0;j<=3;j++)
        {
            if(d[j].p>d[j+1].p)
            {
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }

        }
    }

    printf("\nTitle\tAuthor\tprice of book");
    printf("\n--------------------------------------------------");
    
    for ( i = 0; i < 5; i++)
    {
        printf("\n%s\t%s\t%d",d[i].t,d[i].a,d[i].p);
    }
    

}