#include <stdio.h>

int main(){

    int scores[5] = {5};

    // print intial values 
    for(int i = 0; i < 5; i++) {
        printf("score %d: %d \n", (i + 1), scores[i]);
    }

    // take user input
    for(int i = 0; i < 5; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // print user input 
    for(int i = 0; i < 5; i++) {
        printf("score %d: %d \n", (i + 1), scores[i]);
    }

    return 0;
}