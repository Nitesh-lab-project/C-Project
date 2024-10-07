#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    //composi-->Number divisible by any other number except 1 and itself
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("%d is composite number",n);
            break;
        }   
    } 

    //composite and prime
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }   
    } 

    if(n==1) printf("%d is neither prime nor composite number",n);
    else if(a==1) printf("%d is composite number",n);
    else printf("%d Is prime Number",n);
    return 0;
}