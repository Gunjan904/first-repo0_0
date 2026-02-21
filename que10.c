//write a program to reverse a no.
#include<stdio.h>

int main(){
    int num, reverse=0, remainder;

    printf("enter the no.:");
    scanf("%d",&num);

    while(num != 0){   //loop will work as long as the no. isnt zero
     remainder = num % 10;
     reverse = reverse * 10 + remainder;  //learn the reverse formula
     num = num /10;     
    }

    printf("reverse number is %d\n",reverse);
}
