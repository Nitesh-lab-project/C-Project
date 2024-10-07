// Reverse Number
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    int i=0;
    int r=0;
    while(n>0){
        r=r*10;
        r=r+n%10;
        n=n/10;
        i++;
    }
    printf("%d",r);
    return 0;
}