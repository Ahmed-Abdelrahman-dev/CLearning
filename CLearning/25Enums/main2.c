#include <stdio.h>

typedef enum {
    SUCCESS, FAILURE, PENDING
} Status;

void connectStatus(Status status);
int main(){



    Status myStatus = PENDING; 
    connectStatus(myStatus);

    return 0;
}


void connectStatus(Status status){
    switch (status)
    {
    case SUCCESS:
        printf("Connection was successful\n");
        break;
    case FAILURE:
        printf("Connection was NOT successful\n");
        break;
    case PENDING:
        printf("Connecting ... \n");
        break;
    default:
        break;
    }
}