//Write a program to insert an element in an array in a particular position
#include<stdio.h>
int main(){
    int n,pos,i;
    printf("Enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }printf("\nelements are : ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
     printf("enter the position want to delete :");
     scanf("%d",&pos);
     if(pos<0||pos>n){
        printf("Invalid input");
        return 1;
     }for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
     }printf("ELEMENTS ARE\n");
     for(i=0;i<n-1;i++){
        printf("%d",arr[i]);
     }return 0;
}