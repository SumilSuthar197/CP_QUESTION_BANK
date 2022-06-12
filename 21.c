#include<stdio.h>
struct player
{
    char name[30],team[30];
    float avg;
};
void main()
{
    struct player a[100];
    int n,i;
    printf("enter the no of players data to be stored:");
    scanf("%d",&n);
    if(n>=10)
    {
        for(i=0;i<n;i++)
        {
            printf("\nenter player name,team name and batting average of player:");
            scanf("%s%s%f",a[i].name,a[i].team,&a[i].avg);
        }
        printf("\nname\tteam\tbatting average");
        printf("\n------------------------------------------\n");
        for(i=0;i<n;i++)
        {
            printf("%s\t%s\t%f\n",a[i].name,a[i].team,a[i].avg);
        }
    }
    else
    {
        printf("no of players data to be store is less than 10");
    }
}