
#include <stdio.h>


int main(){

    int rows = 0;
    int cols = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d",&rows);
    printf("Enter the # of Columns: ");
    scanf("%d",&cols);
    printf("Enter the symbol: ");
    scanf(" %c",&symbol);



    for(int i = 1; i <= rows; i++){
        for(int j =1; j <= cols; j++){
        printf(" %c ",symbol);
        }
        printf("\n");
    }
    
    return 0;
}