#include <stdio.h>


int main(){

int num1 = 1;
int num2 = 10;
int num3 = 100;
int num4 = -100;

    // right justified
    printf("%4d\n",num1);
    printf("%4d\n",num2);
    printf("%4d\n",num3);
    printf("%4d\n",num4);
    printf("\n");

    // left justified
    printf("%-4d\n",num1);
    printf("%-4d\n",num2);
    printf("%-4d\n",num3);
    printf("%-4d\n",num4);
    printf("\n");

    // preceeding zeros
    printf("%04d\n",num1);
    printf("%04d\n",num2);
    printf("%04d\n",num3);
    printf("%04d\n",num4);
    printf("\n");

    // proceeding sing
    printf("%+d\n",num1);
    printf("%+d\n",num2);
    printf("%+d\n",num3);
    printf("%+d\n",num4);
    printf("\n");


float price1 = 19.99;
float price2 = 1.50;
float price3= -100.00;


    printf("%+7.1f\n",price1);
    printf("%+7.2f\n",price2);
    printf("%+1.3f\n",price3);
    printf("\n");


}

