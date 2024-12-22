//Write a C program to check whether a given number is an Armstrong number or not.
#include<stdio.h>
#include<math.h>
int main(){
    int num,originalnum,remainder,n=0;
    float result=0;
    printf("enter a number:");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum !=0){
        originalnum /= 10;
        n++;
    }
    originalnum=num;
    while(originalnum !=0){
        remainder= originalnum %10;
        result += pow(remainder,n);
        originalnum /=10;
    }
    if((int)result==num){
        printf("%d is Armstrong number ", num);
    }
    else{
       printf("%d is not a Armstrong number ", num);
    }
       return 0;
    }
