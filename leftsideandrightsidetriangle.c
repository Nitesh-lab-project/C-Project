#include<stdio.h>
int main(){
    int n;
    printf("Enter Rows:");
    scanf("%d",&n);

                          /*
                              * * * * * * *
                              * * *   * * *
                              * *       * *
                              *           *
                          */
    
    int nsp=1;
    int nst=n;
    for(int i=1;i<=2*n+1;i++){   //first line 
            printf("* ");
    }
    printf("\n");

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }



                                    /*
                                       1 2 3 4 5 6 7
                                       1 2 3   5 6 7
                                       1 2       6 7
                                       1           7
                                    */


    int nsp=1;
    int nst=n;
    for(int i=1;i<=2*n+1;i++){   //first line 
            printf("%d ",i);
    }
    printf("\n");

    for(int i=1;i<=n;i++){
            int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d ",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
            a++;
        }
        for(int j=1;j<=nst;j++){
            printf("%d ",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}