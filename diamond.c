#include<stdio.h>
int main(){
    int n;
    printf("Enter Number of rows:");
    scanf("%d",&n);

       //DIAMOND PATTERN

                        /* 
                                  
                                    * 
                                  * * *
                                * * * * *
                              * * * * * * *
                                * * * * *
                                  * * *
                                    *
                         */
    int nsp=n;
    int nst=1;
    int l=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int k=1;k<=nst;k++){
            printf("* ");
        }

        if(i<l) {
            nsp--;
            nst+=2;
        }
        else {
            nsp++;
            nst-=2;
        }
        printf("\n");
    }

    return 0;
}