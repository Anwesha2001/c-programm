#include<stdio.h>
int main(){
    int n,i,j,k,b;
    printf("Enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        b=1;
        for(j=1;j<=n;j++){
            k=b+64;
            char ch=(char)k;
            printf("%c",ch);
            b++;
        }printf("\n");
    }return 0;
}