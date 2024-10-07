#include<stdio.h>
int factorial(int n);
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    
    int a=factorial(n);
    printf("%d",a);
    return 0;
}
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}