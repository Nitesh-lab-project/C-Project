 #include<stdio.h>
int main(){
    int n;
    printf("Enter Rows:");
    scanf("%d",&n);

    //zero and one

                  /*

                    1
                    0 1
                    1 0 1
                    0 1 0 1
                  
                  */

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}