#include<stdio.h>


int main(){

int x = 2;
int y = 3;
int z = 0;

printf("%d\n",(x+y));
printf("%d\n",(x-y));
printf("%d\n",(x*y));

// integer division leads to loss of fractions
// change one of them to be float and set the result as float
printf("%f\n",((float)x/y));


// use modulo to determine if a number is even or odd
x = 6;
printf("%d\n",(x%y));
x = 7;
printf("%d\n",(x%y));


// use ++ and -- to increment or decrement 1 
// only post increment no preincrement 
// first use then increment

printf("%d\n",x);
printf("%d\n",x++);
printf("%d\n",x);
printf("%d\n",x--);

// we can also use augmented assigment 
printf("%d\n",x+=5);



return 0;
}