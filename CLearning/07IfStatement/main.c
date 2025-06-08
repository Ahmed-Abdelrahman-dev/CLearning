#include <stdio.h>

int main(){

    int age = 0;

    printf("Enter your age: ");
    scanf("%d",&age);


    if(age >= 65){
        printf("You are a senior.\n");
    } else if(age >=18){
        printf("You are an adult.\n");
    }else if(age<0){
        printf("You haven't been born yet.\n");
    }else if (age ==0){
        printf("You are a newborn.\n");
    
    }else{
        printf("You are a minor.\n");
    }




    return 0;
}