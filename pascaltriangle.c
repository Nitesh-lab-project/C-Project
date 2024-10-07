#include<stdio.h>
int factorial(int n);
int combination(int n,int r);
int main(){
    
    //PASCAL TRIANGLE

                                 /*
                                      
                                             1
                                            1 1
                                           1 2 1
                                          1 3 3 1
                                         1 4 6 4 1
                                       1 5 10 10 5 1
                                      1 6 15 20 15 6 1

                                 */


                            // first we have to print below format

                                /*
                                     1  -->0C0     C=combination
                                     1 1 -->1C1
                                     1 2 1 -->2C2
                                     1 3 3 1 -->3C3
                                     1 4 6 4 1 -->4C3
                                     1 5 10 10 5 1 -->5C3
                                */


    int n;
    printf("Enter Number:");
    scanf("%d",&n);


    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
           int c=combination(i,j);
           printf("%d",c); 
        }
        printf("\n");
    }


    //without function

    // for(int i=0;i<=n;i++){
    //     int a=1;
    //     for(int j=0;j<=i;j++){
    //        printf("%d ",a); 
    //        a=a*(i-j)/(j+1);
    //     }
    //     printf("\n");
    // }
    
    return 0;
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
     return fact;
}

int combination(int n,int r){
    int ncr=factorial(n)/factorial(r)*(factorial(n-r));
    return ncr;

}