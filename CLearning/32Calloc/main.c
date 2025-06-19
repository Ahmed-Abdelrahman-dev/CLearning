#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d",&number);


    //int *scores = malloc(number*sizeof(int)); // should give garbage but some systems makes it 0s for safty     int *scores = calloc(number, sizeof(int));
    int *scores = calloc(number, sizeof(int)); // same as malloc but initializes values to 0s

    if(scores == NULL){
        printf("There is a problem in Memory.\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("%d ",scores[i]);
    }

     printf("\n");

    for(int i = 0; i < number; i++){
        printf("Enter Score #%d: ", (i+1));
        scanf(" %d",&scores[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%d ",scores[i]);
    }


    free(scores);
    scores = NULL;
    

}
