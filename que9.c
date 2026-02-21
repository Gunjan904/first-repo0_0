// to calculate the factorial of a no.
#include<stdio.h>
int main(){
    int n;
    printf("enter ur no.:");
    scanf("%d",&n);

    int i;
    int fact=1;
    for(i=1; i<=n; i++){
        fact= fact*i;
    }
    printf("%d",fact);  //keep the printf statement outside the for loop
}
