#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);

          //TRIANGLE PATTERN

                             /*
                                  *
                                  * *
                                  * * *
                                  * * * *
                             */

   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf(" * ");
    }
    printf("\n");
   }

   /*
       1
       1 2 
       1 2 3
       1 2 3 4
    */

    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf(" %d ",j);
    }
    printf("\n");
   }

    /* 
      1
      1 3 
      1 3 5 
      1 3 5 7 
    */

   for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=i;j++){
        printf("%d ",a);
        a=a+2;
    }
    printf("\n");
   }

   /*
      A
      A B
      A B C
      A B C D
   */

    for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=i;j++){
        int b=a+64;
        char ch=(char)b;
        printf("%c ",ch);
        a++;
    }
    printf("\n");
   }
    


                                /*   
                                   * * * *
                                   * * *
                                   * *
                                   * 
                                */

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf(" * ");
        }
        printf("\n");
    }
   
    /*
        1 2 3 4
        1 2 3
        1 2 
        1  
    */

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

  /*
     1 3 5 7
     1 3 5
     1 3
     1
  */

   for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=n+1-i;j++){
        printf("%d ",a);
        a=a+2;
    }
    printf("\n");
   }

/*
   A B C D
   A B C
   A B
   A
*/

for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=n+1-i;j++){
        int b=a+64;
        char ch=(char)b;
        printf("%c ",ch);
        a++;
    }
    printf("\n");
   }


                               /*
                                               *
                                           *   *
                                       *   *   * 
                                   *   *   *   * 
                                   
                               */
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }

    /*  
             1
           1 2 
         1 2 3
       1 2 3 4
    */

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }

    /*
              1
            1 3
          1 3 5
        1 3 5 7
    */

for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        int a=1;
        for(int k=1;k<=i;k++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }

    /*
            A
          A B
        A B C
      A B C D 
    */
  
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        int a=1;
        for(int k=1;k<=i;k++){
            int b=a+64;
            char ch=(char)b;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }


                       /*
                             * * * *
                               * * *
                                 * *
                                   *
                       */

    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("  ");
        }
        for(int k=1;k<=n+1-i;k++){
            printf("* ");
        }
        printf("\n");
    }

    /*  
        1 2 3 4
          1 2 3
            1 2
              1
    */

   for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("  ");
        }
        for(int k=1;k<=n+1-i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }

    /*
        1 3 5 7
          1 3 5
            1 3
              3
    */

   for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("  ");
        }
        int a=1;
        for(int k=1;k<=n+1-i;k++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }

    /*
         A B C D
           A B C
             A B
               A
    */

   for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("  ");
        }
        int a=1;
        for(int k=1;k<=n+1-i;k++){
            int b=a+64;
            char ch=(char)b;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    
     }



                 /*
                    1
                    A B
                    1 2 3
                    A B C D
                    1 2 3 4 5
                    
                 */

    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            int b=a+64;
            char ch=(char)b;
            if(i%2==0) printf("%c ",ch);
            else printf("%d ",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}
