//Write a program to insert an element in an array in a particular position.
#include<stdio.h>
int main(){
    int n,pos,i, element;
    printf("Enter range of Array");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n-1;i++){
        printf("ENTER THE ELEMENTS");
        scanf("%d",&arr[i]);
    }
    printf("Elements are:\n");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    printf("Enter new position");
    scanf("%d",&pos);
    if(pos<0 || pos>n){
        printf("invalid input");
        return 1;
    }for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    } 
    printf("Enter new element");
    scanf("%d",&element);
    arr[pos-1]=element;
    printf(" Updated Elements are:\n");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
     return 0;
}