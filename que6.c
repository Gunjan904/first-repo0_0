//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>

int main(){
    float sellingprice, costprice, profit, loss, percentage;
    printf("enter the selling and costprice: \n");
    scanf("%f %f", &sellingprice, &costprice);
    if (sellingprice>costprice){
        profit=sellingprice-costprice;
        percentage=(profit/costprice)*100;
        printf("profit is %f \n", profit);
        printf("profit percentage is %f \n", percentage);
    }

    else if (sellingprice<costprice){
        loss=costprice-sellingprice;
        percentage=(loss/costprice)*100;
        printf("loss is %f \n", loss);
        printf("loss percentage is %f \n", percentage);
    }
    else{
        printf("no profit, no loss");
    }

       }
