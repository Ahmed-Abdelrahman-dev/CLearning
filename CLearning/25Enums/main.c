#include <stdio.h>


/*enum Day{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THURUSDAY = 5, FRIDAY = 5, SATURDAY = 7 
};*/
 // a set of constants and values 
 // you give it the day it gives you a number 

 
 // compine typedef with enum 
 typedef enum{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THURUSDAY = 5, FRIDAY = 5, SATURDAY = 7 
} Day;

int main(){


    Day today = SUNDAY;
    printf("%d\n",today);

    if (today == SUNDAY || today == SATURDAY)
    {
        printf("It's the weekend.\n");
    } else{
        printf("It's a weekday.\n");
    }
    

    return 0;
}