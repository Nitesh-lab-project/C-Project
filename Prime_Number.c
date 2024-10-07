//Prime Numbers

#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

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
    