#include<stdio.h>
int factorial(int n);

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int r;
    printf("Enter r:");
    scanf("%d",&r);
    
    int nfact=factorial(n);    //n!
    int rfact=factorial(r);    //r!
    int nrfact=factorial(n-r);  //(n-r)!
    
    int a=nfact/(rfact*nrfact);
    printf("%d",a);
    return 0;
}
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}