#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    int s=sum(n);
    printf("%d",s);
    return 0;
}