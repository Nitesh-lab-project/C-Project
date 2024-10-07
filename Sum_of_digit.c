// Sum of Digit
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    
    int sum=0;
    int i=0;
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
        i++;
    }
    printf("%d",sum);
    return 0;
}