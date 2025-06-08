#include <stdio.h>
#include <string.h>


int main(){

    char name[50] = "";

    printf("Please enter your name: ");
    
    //scanf, can't read white spaces 
    fgets(name,sizeof(name),stdin);
    // remove the \n at the end
    name[strlen(name)-1] = '\0';
    
    if(strlen(name)==0){
        printf("You haven't entered your name!");
    } else{
        printf("Hello, %s",name);

    }



    return 0;
}
