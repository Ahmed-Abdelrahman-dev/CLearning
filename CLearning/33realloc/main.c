#include <stdio.h>
#include <stdlib.h>

int main(){


    // create a array and populate it. 
    int number =0;
    printf("Enter the number of prices: ");
    scanf("%d",&number);

    float *prices = malloc(number*sizeof(float));

    if(prices == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter price #%d: ", (i+1));
        scanf("%f",&prices[i]);
    }

    
    // add more values to the array (or remove)
    // make a new array with the new size and copy the old values in. 
    // relloc does that + free the old memory location
    int newNumber = 0;
    printf("Enter the number of all prices(old and new): ");
    scanf("%d",&newNumber);

    float *temp = realloc(prices,newNumber*sizeof(float));

    if(temp == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    } else{
        prices = temp; // make the pointer prices point to the memory location which temp was pointing to. 
        temp = NULL; // to erase the temp pointer. 


        // adding the new element/s to the end of the array
        // we start at the end of the old array and finish at the end of the new array
        for(int i = number; i < newNumber; i++){
            printf("Enter price #%d: ", (i+1));
            scanf("%f",&prices[i]);
        }
        
        for(int i = 0; i < newNumber; i++){
        printf("$%05.2f ", prices[i] );
        }
    }









    free(prices);
    prices = NULL;


    return 0;
}