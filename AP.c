#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    
    //1,3,5,7,9,....upto n terms
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+2;
    }

    //4,7,10,13,16,...
    int a=4;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+3;
    }

    //100,97,94,.... upto +ve term
    int a=100;
        for(int i=1;a>0;i++){
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}