//Write a C program to check whether a number is negative, positive, or zero.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    if(num>0){
        printf("%d is a positive number",num);
    }else if(num<0){
        printf("%d is a negative number");
    }else{
        printf("Number is zero");
    }
    return 0;
}