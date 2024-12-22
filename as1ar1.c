// Write a c program to print an array
#include<stdio.h>
int main(){
    int arr[5];
    for(int i = 0;i<=4;i++){
        printf("Enter %d th element: ",i);
        scanf("%d",&arr[i]);
    }for (int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}