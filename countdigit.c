#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    //count given digit eg.12348-->5 digit
    int i=0;
    while(n!=0){
        n=n/10;
        i++;
    }
    printf("%d is count of given digit",i);
    return 0;
}