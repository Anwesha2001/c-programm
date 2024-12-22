//Write a program to convert temperatures in Celsius to Fahrenheit and vice-versa.
#include<stdio.h>
int main(){
    int choice;
    float celcius,farenhite;
    printf ("choose any one option\n");
    printf("1.celcius to farenhite\n");
    printf("2.farenhite to celcius:\n");
    printf("choose 1 or 2 :");
    scanf("%d",&choice);
    if(choice==1){
        printf("enter temperature in celcius:");
        scanf("%f",&celcius);
        farenhite=(celcius * 9/5)+32;
        printf("temperature in farenhite = %f",farenhite);
    }
    else if (choice==2){
        printf("enter temperature in farenhite :");
        scanf("%f",&farenhite);
        celcius=(farenhite-32)*5/9;
        printf("temperature in celcius = %f",celcius);
    }
    else{
        printf("choose correct option(1 or 2)");
    }
    return 0;
    }
