
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>



int main(){

    for(int i = 1; i <= 10; i++){
        printf("%02d\n",i);
    }

    printf("\n-----------------\n\n");

    for(int i = 0; i <= 100; i+=5){
        printf("%02d\n",i);
    }

    printf("\n-----------------\n\n");

    for(int i = 10; i >= 0; i--){
        printf("%02d\n",i);
        Sleep(1000);
    }
    printf("\nHappy New Year!\n");

    printf("\n-----------------\n\n");




    return 0;
}

