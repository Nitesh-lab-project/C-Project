#include<stdio.h>
          //function
int min(int a,int b);
int gcd(int a,int b);

int main(){
    int a;
    printf("Enter first Number:");
    scanf("%d",&a);
    int b;
    printf("Enter Second Number:");
    scanf("%d",&b);

    //HCF -->Highest common factor and greatest common divisior

    int hcf=gcd(a,b);
    printf("%d",hcf);


    return 0;
}
 
 //function
int min(int a,int b){
    if(a<b) return a;
    else return b;
}

int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }                 
    }
    return hcf;
}