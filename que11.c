//write a program to check if a no. is a palindrome
#include<stdio.h>
int main(){
    int n, original, reverse=0, remainder; //remember to initialize reverse to 0
    printf("enter the no.:");
    scanf("%d",&n);
    original=n;
    while(n != 0){
        remainder= n % 10;
        reverse = reverse * 10 + remainder;
        n= n/10;
    }
    if (original == reverse){
        printf("It is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
    return 0;
}
