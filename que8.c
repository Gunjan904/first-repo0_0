// write a program to print the sum of the first n odd numbers
#include<stdio.h>
int main(){
    int n;
    printf("enter ur no.:");
    scanf("%d",&n);

    int i;
    int sum=0;
    for (i=1; i<=n; i++){
        if(i%2 !=0){
            sum +=i;
            printf("the sum is%d \n",sum);
        }
    }
}
