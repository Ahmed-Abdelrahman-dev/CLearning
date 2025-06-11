#include <stdio.h>


int main(){

    char pad[][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'},{'*','0','#'}};

    for(int i =0; i < 4; i++){ // rows
        for(int j = 0; j < 3; j++ ){ // columns 
            printf("%6c",pad[i][j] );
        }
         printf("\n\n");
    }


    return 0;
}