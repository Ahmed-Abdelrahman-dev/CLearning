#include <stdio.h>

int main(){

    int numbers[] = {10, 20, 30, 40, 50};
    
    printf("%d",numbers); // This will print the address of the first element of the array
    printf("\n%d",*numbers); // This will print the value of the first element of the array
    printf("\n%d",numbers[5]); // This will print garbage value. C doesn't have out of bounds exceptions
    
    
    for(int i = 0; i < 5; i++){ // manual size 
        printf("\n%d", numbers[i]);     // This will print each element of the array
    }


    char name[] = "John Doe"; // Declare a character array (string)
    char grades[] = {'A', 'B', 'C', 'D', 'F'}; // Declare a character array for grades

    int nameSize = sizeof(name) / sizeof(name[0]); // Calculate the size of the name array
    int gradsSize = sizeof(grades) / sizeof(grades[0]); // Calculate the size of the grades array


    for(int i = 0; i < nameSize; i++){
        printf("\n%c", name[i]);     // This will print each element of the array
    }

        for(int i = 0; i < gradsSize; i++){
        printf("\n%c", grades[i]);     // This will print each element of the array
    }
    return 0;
}