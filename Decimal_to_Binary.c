//Decimal to Binary Conversion

#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10];    
system ("cls"); 
int n; 
printf("Enter the number to convert: ");    
scanf("%d",&n); 

for(int i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    

for(int i=1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    

return 0;  
}  

