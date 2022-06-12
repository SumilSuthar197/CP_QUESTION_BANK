#include<stdio.h>
struct student
{
    char name[30];
    int roll_no,fees;
};
void main()
{
    struct student a[100];
    int n,i;
    printf("enter the no of student data to be stored:");
    scanf("%d",&n);
    if(n>=10)
    {
        for(i=0;i<n;i++)
        {
            printf("\nenter student name,roll no and fees of student:");
            scanf("%s%d%d",a[i].name,&a[i].roll_no,&a[i].fees);
        }
        printf("\nname\trollno\tfees");
        printf("\n-----------------------------\n");
        for(i=0;i<n;i++)
        {
            printf("%s\t%d\t%d\n",a[i].name,a[i].roll_no,a[i].fees);
        }
    }
    else
    {
        printf("no of student data to be store is less than 10");
    }
}