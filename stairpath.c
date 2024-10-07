#include<stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;
    return stair(n-1) + stair(n-2);
}
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    //total ways to reach on last stair

    int a=stair(n);
    printf("%d",a);
    return 0;
}