#include <stdio.h>

int main(){

    int dayOfWeek = 0;

    printf("Please enter the number of the day(1-7): ");
    scanf("%d",&dayOfWeek);

    switch (dayOfWeek)
    {
        case 1:
            printf("It's Monday\n");
            break;
        case 2:
            printf("It's Tuesday\n");
            break;
        case 3:
            printf("It's wednesday\n");
            break;
        case 4:
            printf("It's Thursday\n");
            break;
        case 5: 
            printf("It's Friday\n");
            break;
        case 6:
            printf("It's Saturday\n");
            break;
        case 7:
            printf("It's Sunday\n");
            break;
        default:
            printf("Invalid Choice, please enter a number (1-7)");
    }

    return 0;

}

