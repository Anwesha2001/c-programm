//Write a C program to evaluate the algebraic expression (ax+b)/(ax-b).
#include<stdio.h>
int main(){
    int a,b,x;
    float nume,deno;
    printf ("enter value of a ,b and x :");
    scanf("%d %d %d",&a,&b,&x);
    float result;
    nume=a*x+b;
    deno=a*x-b;
    if(deno==0){
        printf("denominator can't be zero");
    }
    else{
        result=nume/deno;
        printf("value of (ax+b)/(ax-b) is %f",result);
    }
    return 0;
}