#include <stdio.h>

void birthday(int *age);

int main(){

    int age = 25;
    int *pAge = &age;

    printf("%p\n", &age); // prints the address of age
    printf("%p\n", pAge); // prints the value of the pointer (should be the same)

    birthday(pAge);

    printf("You are now %d years old.\n",age );

    printf("%p\n", pAge); // prints the value of the pointer (should be the same)


    return 0;
}

void birthday(int *age){
    (*age)++;
}
