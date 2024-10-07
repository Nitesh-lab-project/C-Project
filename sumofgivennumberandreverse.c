#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

     //sum of given number and its reverse value

    int i=0;
    int r=0;
    int sum=0;
    int a=n;
    while(n>0){
        r=r*10;
        r=r+n%10;
        n=n/10;
        i++;
    } 
    sum=r+a;
    printf("%d is given number\n",a);
    printf("%d is reverse of given number\n",r);
    printf("%d is sum of reverse and given number",sum);
    return 0;
}