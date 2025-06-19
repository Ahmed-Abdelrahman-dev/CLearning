#include <stdio.h>
#include <string.h>


int main(){

    FILE *pFile = fopen("C:\\Users\\ahmed\\OneDrive\\Desktop\\output.txt", "r");

    char buffer[1024] = {0};

    if (pFile == NULL)
    {
        printf("Couldn't open the file");
        return 1;
    }
    
    while(fgets(buffer, sizeof(buffer),pFile) != NULL){
        printf("%s", buffer);
    }


    fclose(pFile);

    return 0;
}