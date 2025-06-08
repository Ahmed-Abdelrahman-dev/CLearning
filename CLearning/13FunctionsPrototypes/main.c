#include <stdio.h>
#include <stdbool.h>

void hello(char name[],int age); // function prototype
bool ageCheck(int age); // function prototype

int main(){

    hello("Sponge Pop", 30);
    
    if(ageCheck(15)){
        printf("You are old enough to work at the Krusty Krab\n");
    } else{
        printf("You must be 16+ to work at the Krusty Krab\n");

    }

    return 0;
}

void hello(char name[],int age){
    printf("Hello %s.\n",name);
    printf("You are %d years old.\n",age);

}

bool ageCheck(int age){
    return age >= 16;
}