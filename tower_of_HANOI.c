#include<stdio.h>
int tower(int n,char s,char h,char d){
    if(n==0) return ;
    tower(n-1,s,d,h);
    printf("%c-->%c\n",s,d);
    tower(n-1,h,s,d);
    return ;
}
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
     
     //Tower Of HANOI -->A Game in which all disks must placed over last tower i.e. tower c
      // 1 -->Source(s)
      // 2-->Helper(h)
      // 3-->Destination(d)
    
    tower(n);
    return 0;
}