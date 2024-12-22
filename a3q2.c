/*Write a program that stores the marks of the subjects Mathematics and 
English of n number of students in an array and then prints their total marks.*/
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of students:");
    scanf("%d",&n);
    int marks[n][2], Total[n];
    for(i=0;i<n;i++){
        printf("marks of %d student in Math :\n",i+1);
        scanf("%d",&marks[i][0]);
        printf("marks of %d student in English :\n",i+1);
        scanf("%d",&marks[i][1]);
      }
      for(i=0;i<n;i++){
        Total[i]=marks[i][0]+marks[i][1];
      }
      for(i=0;i<n;i++){
      printf("Total marks of %d student is %d \n ", i+1,Total[i]);
      }
      return 0;
}
