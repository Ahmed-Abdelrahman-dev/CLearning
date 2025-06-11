#include <stdio.h>
#include <string.h>

int main (){

    char names[4][25] = {0};

    int namesSize = sizeof(names)/sizeof(names[0]); // dynamic size for loops

    for(int i = 0; i < namesSize; i++ ){
        printf("Enter a name: ");
        fgets(names[i],sizeof(names[i]), stdin);
        names[i][strlen(names[i])-1] = '\0';
    }
    
    for(int i = 0; i < namesSize; i++ ){
    printf("Name %d is: %s\n",(i+1),names[i]);
    }
    

    return 0;
}