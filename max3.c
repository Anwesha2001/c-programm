//Write a C program to find the maximum between three numbers.
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("%d is max number", num1);
    }else if(num3>num1 && num3>num2){
        printf("%d is max number",num3);
    }else{
        printf("%d is max number",num2);
    }
    return 0;
}