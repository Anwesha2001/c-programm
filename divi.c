//Write a C program to check whether a number is divisible by 5 and 11 or not within the range of 100 to 500.
#include<stdio.h>
int main(){
    int n1,n2,n;
    printf("starting range");
    scanf("%d",&n1);
    printf("Ending range");
    scanf("%d",&n2);
    printf("ENTER NUMBER: ");
    scanf("%d",&n);
    if(n<n1 || n>n2){
        printf("Enter a valid number");
    }else{
        if(n%5 == 0 && n%11 ==0){
            printf("%d id divisible by both 5 and 11",n);
        }else{
            printf("It is not divisible by both 5 and 11");
        }
    }
    return 0;
}