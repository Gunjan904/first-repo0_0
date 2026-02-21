//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main(){
    int x;
    printf("enter the year : ");
    scanf("%d",&x);
    if((x%4==0)||(x%400==0)){
        printf("LEAP YEAR\n");
    }
    else if(x%100==0){
        printf("NOT LEAP YEAR\n");
    }
    else{
        printf("NOT LEAP YEAR\n");
    }
    return 0;
}
