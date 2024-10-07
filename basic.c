#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    //ponter -->store variable address
    /*    print by %p
          & -->return address
          * -->return value 
    */
   int *a=&n;

   printf("%d\n",n);
   printf("%p\n",&a);
   printf("%p\n",&n);
     
    return 0;
}