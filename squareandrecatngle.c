#include<stdio.h>
int main(){

//number of rows
int n;
printf("Enter Number of rows:");
scanf("%d",&n);

//Number of columns 
int m;
printf("Enter number of columns:");
scanf("%d",&m);

//RECTANGLE PATTERN  
      /*
              * * * *
              * * * *
              * * * *
      */
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        printf("* ");
    }
    printf("\n");
}


/*
     1 2 3 4
     1 2 3 4
     1 2 3 4
*/

for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        printf("%d ",j);
    }
    printf("\n");
}

/* 
     1 3 5 7
     1 3 5 7
     1 3 5 7
*/

for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=m;j++){
        printf("%d ",a);
        a=a+2;
    }
    printf("\n");
}

/*
     A B C D
     A B C D
     A B C D
*/

for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=m;j++){
        int b=a+64;
        char ch=(char)b;
        printf("%c ",b);
        a++;
    }
    printf("\n");
}

return 0;
}
