/*  ****
    ***
    **
    *   print this*/
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number");
    scanf("%d",&n);
    for(i=n;i>=1;i--){       //for(i=1;i<=n;i++){                  
        for(j=1;j<=i;j++){         //for(j=1;j<=n+1-i;j++){
            printf("*");                  // printf("*")
        }printf("\n");
    }return 0;
}