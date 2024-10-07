//Fibonacci Series
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    int sum=0;
    int a=1;
    int b=1;
    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }

     printf("%d ",sum);
    return 0;
}