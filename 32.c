//PS THE QUESTION IS NOT CLEAR AND THERE ARE 2 POSSIBLITIES OF ANSWERS

//IF SUM OF N NATURAL NOS USING RECURSIVE
#include<stdio.h>
int sm(int n){
    if(n==1)
        return 1;
    else
        return sm(n-1)+n;
}
void main(){
    int n,s;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    s=sm(n);
    printf("The sum of %d numbers is %d.",n,s);
}

// IF SUM OF N GIVEN NUMBERS USING RECURSIVE

#include<stdio.h>
int sumn(int a[],int n){
    int sum=0;
    if (n==0)
    return 0;
    else
    return sumn(a,n-1) + a[n-1];
}
void main(){
    int a[100],n,i,s;
    printf("Entter the num of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    s= sumn(a,n);
    printf("The sum is %d",s);

}
