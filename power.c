#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    int b;
    printf("Enter power on number:");
    scanf("%d",&b);

    //a raised to the power b

    int p=power(a,b);
    printf("%d",p);

    return 0;
}
