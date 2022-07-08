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
