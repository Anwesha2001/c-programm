#include <stdio.h>
int main(){
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter range: ");
    scanf("%d",&b);
    for(int i=0;i<b;++i){
        printf("%d * %d = %d  \n", a, i, a*i);
    }
    return 0;
}