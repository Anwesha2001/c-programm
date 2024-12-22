//Write a program to store marks for n numbers of students in an array and print their marks.
#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    //printf("\nEnter array values:");
    for(int i =0;i<n;i++){
        printf("marks of %d student is",i+1);
        scanf("%d",&a[i]);
    } for(int i =0;i<n;i++){
        printf("marks of %d student is %d\n",i+1,a[i]);

    }return 0;
}