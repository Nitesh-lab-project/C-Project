#include<stdio.h>
int main(){
    int a;
    printf("Enter first Number:");
    scanf("%d",&a);
     
    int b;
    printf("Enter second Number:");
    scanf("%d",&b);

    //swap two number by using tird variable

    int temp=a;
    a=b;
    b=temp;

    printf("swap of given number is %d %d",a,b);

    // swap of two number without using third variable

    a=a+b;
    b=a-b;
    a=a-b;

    printf("swap of given number is %d %d",a,b);

    return 0;
}