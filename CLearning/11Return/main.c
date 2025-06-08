#include <stdio.h>
#include <stdbool.h>

double square(double x){
    return x * x;
}
double cube(double x){
    return x * x * x;
}
bool ageCheck(int age){
    if(age >= 18) return true;
    else return false;
}
int max(int x, int y){
    if(x>=y)return x;
    else return y;
}


int main(){

    printf("%lf\n",square(3.1));
    printf("%lf\n",cube(3.1));

    if(ageCheck(120)){
        printf("You may sign up.\n");
    }else{
        printf("You must be 18+ to sign up.\n");
    }

    printf("%d\n",max(0,0));




    return 0;
}