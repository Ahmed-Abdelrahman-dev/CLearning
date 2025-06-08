#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int randomNum1 = (rand() % 51) +50;
    int randomNum2 = (rand() % 51) +50;
    int randomNum3 = (rand() % 51) +50;

    printf("%d %d %d\n", randomNum1,randomNum2,randomNum3);

}