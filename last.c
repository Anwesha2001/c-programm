//Write a C program to input any character and check whether it is an alphabet, digit, or special character. 
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if ((ch >='a' && ch <='z')||(ch >='A' && ch <='Z')){
        printf("%c is a character",ch);
    }else if (ch >= '0'&& ch<='9'){
        printf("%c is a digit",ch);
    }else{
        printf("%c is a special character",ch);
    }
    return 0;
}