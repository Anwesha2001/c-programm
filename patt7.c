#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter number of rows and columns");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if((i==1||i==r)||(j==1||j==c)){
                printf("*");
            }
                else{
                    printf(" ");
                }
        }printf("\n");
    }  return 0;
}