#include <stdio.h>

int result = 0; // global scope but hard to debug


int add(int x, int y){
    int result = x + y; // local variable
    return result;
}

int subtact(int x, int y){
    int result = x - y;
    return result;
}

int main(){

    int result = subtact(3,4);
    

    printf("%d\n",result);

    return 0;
}