#include<stdio.h>
void swap(int* a,int* b);
int main(){
    int a;
    printf("Enter first Number:");
    scanf("%d",&a);
     
    int b;
    printf("Enter second Number:");
    scanf("%d",&b);
       
   swap(&a,&b);
   printf("swap of given number is %d %d",a,b);
    return 0;
}

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return ;
}