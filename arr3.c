/*Write a C program to pass an array to a function using Call by Reference, update the array values in the
function, print the array elements both in the function and in the calling function.*/
#include<stdio.h>
void update(int *ar,int v){
    for(int i=0;i<v;i++){
        ar[i]+=10;
    }
    for(int i=0;i<v;i++){
        printf("%d  ",ar[i]);
    }
}
int main(){
    int v,i;
    printf("Enter range\n");
    scanf("%d",&v);
    int ar[v];
    printf("Enter array values\n");
    for(i=0;i<v;i++){
        scanf("%d",&ar[i]);
    }
    printf("array before update\n");
    for(i=0;i<v;i++){
        printf("%d  ",ar[i]);
    }printf("\n");
    update(ar,v);
    printf("\n");
    printf("array after update\n");
    for(i=0;i<v;i++){
        printf("%d  " ,ar[i]);
    }
    return 0;
}