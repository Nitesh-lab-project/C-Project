// Swap two Number Without Using Third Variables
#include<stdio.h>
int main(){
    int a;
    printf("Enter First Number:");
    scanf("%d",&a);

    int b;
    printf("Enter Second Number:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}