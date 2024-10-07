#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways=0;
    int downways=0;

    if(cr==er && cc==ec) return 1;
    if(cr==er) {
        rightways+=maze(cr,cc+1,er,ec);
        }
    if(cc==ec){
        downways+=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
       rightways+=maze(cr,cc+1,er,ec);
       downways+=maze(cr+1,cc,er,ec);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n;
    printf("Enter Rows:");
    scanf("%d",&n);
     int m;
    printf("Enter Columns:");
    scanf("%d",&m);
    //total ways to reach on last box

    int a=maze(1,1,n,m);
    printf("%d",a);
    return 0;
}