#include<stdio.h>
int fibo(int n);
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    //fibonacci number-->1,1,2,3,8,13,...
     int c=fibo(n);
    printf("%d",c);
    return 0;
}
int fibo(int n){
    int sum=0;
    int a=1;
    int b=1;
    for(int i=1;i<=n;i++){  
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
}