#include <stdio.h>


typedef int Number;
typedef char String[50];
typedef char Initials[3]; // 2 letters and /0 null terminator 



int main(){


    Number x  = 3;
    Number y = 4;
    Number z = x+y;

    printf("%d\n",z);

    String name = "Ahmed Abdelrahman";
    printf("%s\n",name);


    Initials user = "AA";
    printf("%s\n",user);



    return 0;
}


