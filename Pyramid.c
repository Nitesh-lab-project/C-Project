#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows");
    scanf("%d",&n);

    //PYRAMID

                           /*
                                      
                                      *
                                    * * *
                                  * * * * *
                                * * * * * * * 
                           */
    int nst=1;
    int nsp=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");

        }
        nsp--;
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        nst=nst+2;
        printf("\n");
    }
    



                     /*
                          1
                        1 2 1
                      1 2 3 2 1
                    1 2 3 4 3 2 1

                     */
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");

        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        int a=i-1;
       for(int q=1;q<=i-1;q++){
        printf("%d ",a);
        a--;
       }
        printf("\n");
    }

                        
    return 0;
}