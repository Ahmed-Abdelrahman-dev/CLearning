#include <stdio.h>
#include <stdbool.h>

int main(){

    int age = 34.5;
    int year = 2025;
    float gpa = 3.7;
    char grade = 'A';
 
    printf("The year is %d.\n",year);
    printf("You are %d years old and you have a %5.2f gpa.\n",age,gpa);
    printf("Your grade is %c.\n",grade);


    double pi = 3.1455926;
    double e = 2.7182818284;

    printf("pi is %.10lf and e is %.10lf.\n",pi,e);
    printf("pi is %.10lf times e %.10lf is %.10lf.\n",pi,e,(pi*e));


    char name [] = "Ahmed";
    char food[] = "Kofta";

    printf("My name is %s and my favorite food is %s.\n",name,food);


    bool isOnline = false;

    if(isOnline){
        printf("You are online.\n");
    }
    else{
        printf("You are offline.\n");
    }


    return 0;
}