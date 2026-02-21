//write a program to check if a no. is an armstrong no.

/*an armstrong no is a no. that is equal to the sum of its own digits
each raised to the power of the number of digits
eg. 153 ....ie 1^3 + 5^3 + 3^3= 153*/

#include<stdio.h>
#include<math.h>

int main(){
    int num, original, remainder, n =0;
    double result = 0.0;

    printf("enter an integer:");
    scanf("%d", &num);

    original = num;

    while(original != 0){
    original /= 10;
    n++;
    }

    original = num;

    while (original != 0){
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if ((int)result == num){
        printf("%d is an armstrong number \n", num);
    }
    else{
        printf("%d is not an armstrong number \n", num);
    }
}
