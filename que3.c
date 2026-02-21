//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main(){
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        printf("lower case\n");
    }
    else if(ch>='A'&&ch<='Z'){
        printf("upper case\n");
    }
    else if(ch>='0'&&ch<='9'){
        printf("digit\n");
    }
    else{
        printf("special characeter\n");
    }
    return 0;
}
