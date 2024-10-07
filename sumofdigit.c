#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    //sum given number digit 
    int i=0;
    int sum=0;
    //int lastdigit=0;
    while(n!=0){
        //lastdigit=n%10;
        sum=sum+n%10;
        n=n/10;
        i++;
    }
    printf("%d is count of given digit\n",i);
    printf("%d is sum of given digit",sum);


   // SUM OF ALL EVEN DIGIT
   int i=0;
    int sum=0;
   // int lastdigit=0;
    while(n!=0){
        //lastdigit=n%10;
        if((n%10)%2==0){
        sum=sum+n%10;
        }
        n=n/10;
        i++;
    }
    printf("%d is count of given digit\n",i);
    printf("%d is sum of even digit",sum);

    return 0;
}