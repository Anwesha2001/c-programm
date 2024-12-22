//Write a C program to list all files and sub-directories in a directory.
#include<stdio.h>
#include<dirent.h>
int main(){
    char path[100];
    struct dirent *entry;
    DIR *dr;
    printf("Enter directory path :");
    scanf("%s",path);
    dr=opendir(path);
    if(dr==NULL){
        printf("could not open directory");
        return 1;
    }while((entry=readdir(dr))!=NULL){
        printf("%s\n",entry ->d_name);
    }closedir(dr);
    return 0;
}
