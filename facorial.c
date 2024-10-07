#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}         
                
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
                         
                          // Recursion -->Function call itself (Not provide for loop)
    
    int fact=factorial(n);
    printf("%d",fact);

    return 0;
}
