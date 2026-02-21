//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter the three sides : ");
    scanf("%d %d %d", &a, &b, &c);
     
    if(a+b>c && b+c>a && a+c>b){
       printf("it is a valid triangle\n");
        
       if(a==b&&b==c){
        printf("it is an equvilateral triangle");
       }

       else if(a==b||b==c||c==a){
            printf("it is an isosceles triangle ");
       }
       else{
        printf("it is a scalene triangle");
       }

    }
    else{
        printf("it is not a valid triangle");
    }
}
