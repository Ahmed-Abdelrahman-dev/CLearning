#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Enter the number of grades: ");
    scanf(" %d",&number);
    
    
    
    char *grades = malloc(number * sizeof(char)); // to reserve memory space from the heap

    if(grades == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }


    for(int i = 0; i < number; i++ ){
        printf("Enter grade #%d: ",(i+1));
        scanf(" %c",&grades[i]);
    }

    for(int i = 0; i < number; i++ ){
        printf("%c ",grades[i]);
    }

    free(grades); // to free the memory space from the heap
    grades = NULL; // avoids dangling pointers (a pointer that points to nothing)


    return 0;
}