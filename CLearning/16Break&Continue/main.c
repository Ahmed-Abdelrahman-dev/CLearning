
#include <stdio.h>


int main(){

    for (int i = 0;i < 10; i++ ){
        if(i == 4) break; 
        printf("%d\n",i);
    }
    printf("\n---------------- \n\n");
    for (int i = 0;i < 10; i++ ){
        if(i == 4) continue; 
        printf("%d\n",i);
    }


    return 0;
}