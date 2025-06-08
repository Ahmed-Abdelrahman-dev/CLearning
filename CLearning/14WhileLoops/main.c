#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int main(){

    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y/N) : ");
        scanf(" %c",&response);
        getchar(); // to clear buffered \n
        if(response != 'Y' && response != 'y'){
            isRunning = false;
        }
    }

    printf("You quit the game.\n");

    return 0;
}