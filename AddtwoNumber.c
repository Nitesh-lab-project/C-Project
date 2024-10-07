#include<stdio.h>
int sum(int a,int b);  //function

int main(){
    int a;
    printf("Enter first Number:");
    scanf("%d",&a);
    int b;
    printf("Enter second Number:");
    scanf("%d",&b);

    printf("%d is sum of Numbers",sum(a,b));

    return 0;
}

int sum(int a,int b) //function
{
    return a+b;
}
