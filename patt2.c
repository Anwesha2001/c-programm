/*1234
  1234
  1234
  1234   print this*/
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        
            printf("%d",j);
            
        }printf("\n");
    }return 0;
}