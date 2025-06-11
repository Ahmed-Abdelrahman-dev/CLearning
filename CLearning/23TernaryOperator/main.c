#include <stdio.h>
#include <stdbool.h>


int main(){

    /* int x = 7;
    int y = 6;

    int max = (x>y) ? x : y;

    printf("%d",max); */

    /*bool isOnline = 1;

    printf("%s", isOnline? "Online":"Offline");*/

    /*int number = 7;

    printf("%d is %s", number, (number%2 == 0) ? "even.\n" : "odd.\n");*/


    int age = 1;

        printf("You are %d year%s old.\n", age, (age>1) ? "s" : "");

    int hours = 20;
    int minutes = 3;
    char *meridiem = (hours < 12) ? "am" : "pm";

    
    printf("%02d:%02d %s",(hours > 12) ? (hours-12) : hours ,minutes,meridiem);




    return 0;

}