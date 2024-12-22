//Write a C program to check whether a given string is Palindrome or not.
#include<stdio.h>
#include<string.h>
int ispalindrome(char st[]){
    int len =strlen(st);
    for(int i =0;i<len/2;i++){
        if(st[i] !=st[len-i-1]){
            return 0;//not palindrome
        }
    } return 1;   
}
int main(){
    char str[10];
    printf("Enter a string  ");
    scanf("%s",str);
     if(ispalindrome(str)){
        printf("%s is a palindrome",str);
     }else{
                printf("%s is not a palindrome",str);

     }
     return 0;
}