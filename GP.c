#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    //1,2,4,8,16,32,... upto n term
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*2;
    }

    //3,12,48,....upto n term
    int a=3;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*4;
    }

    //100,50,25,...upto n term
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a=a*1/2;
    }

    return 0;
}