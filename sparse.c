/*1. Write a C program to read a 2D array (with most of the elements as 0s) and then
represent the same array as Sparse Metrics.*/
#include<stdio.h>
int main(){
    int r,c,n,nz;
    printf("Enter row number\n");
    scanf("%d",&r);
    printf("Enter column number\n");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter array values\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("2d array\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                n++;
            }else{
                nz++;
            }
        }
    } if(nz>n){
        printf("This 2D matrix is not sparse matrix\n");
    }else{
        printf("This is sparse matrix\n");
        int k=0;
        int spa[nz][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                 if(arr[i][j]!=0){
                     spa[k][0]=i;
                     spa[k][1]=j;
                     spa[k][2]=arr[i][j];
                     k++;
                 }
            }
        }
    printf("Sparse matrix\n");
    for(int i=0;i<nz;i++){
        for(int j=0;j<c;j++){
            printf("%d",spa[i][j]);
        }printf("\n");
    }
    } 
    return 0;
}