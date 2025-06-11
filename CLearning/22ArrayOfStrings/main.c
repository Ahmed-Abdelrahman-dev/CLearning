#include <stdio.h>

int main(){

    char fruits[][10] = {"Apple","Banana", "Coconut"};

    int size = sizeof(fruits)/sizeof(fruits[0]);
    // printf("%d\n",size); //for testing 

    /* for(int i = 0; i < size; i++){
        printf("%10s\n",fruits[i]);
    }*/

    fruits[0][0] = 'e';
    fruits [0][4] = 'A';

    for(int i = 0; i < size; i++){
        printf("%10s\n",fruits[i]);
    }

    return 0;
}