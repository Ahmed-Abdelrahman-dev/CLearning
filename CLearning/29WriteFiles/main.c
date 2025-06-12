#include <stdio.h>

int main(){

    FILE *pFile = fopen("C:\\Users\\ahmed\\OneDrive\\Desktop\\output.txt","w");

    char text[] = {"BOOTY BOOTY BOOTY\nROCKIN' EVERYWHERE!"};

    if (pFile == NULL){
        printf("Error opening the file.\n");
        return 1;
    }

    fprintf(pFile, "This is my new file\n%s" , text);

    printf("File was written successfully\n");

    fclose(pFile);
    return 0;
}