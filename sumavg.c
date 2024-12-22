//average of three numbers
#include <stdio.h>
int main(){
    int a,b,c,sum;
    float average;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a ,&b ,&c);
    sum = a+b+c;
    average =a+b+c/3;
    printf("sum of three numbers: %d\n ",sum);
    printf("average of three numbers: %f\n",average);
    return 0;
}