#include <stdio.h>

typedef struct {
    char model[25];
    int year;
    int price;
} Car;

void printCar(Car car);


int main(){

    Car cars [] = { {"Mustang",2025,32000},
                    {"Corvette",2026,68000},
                    {"Chanllenger",2024,29000}};

    int lenght = sizeof(cars)/sizeof(cars[0]);

    for (int i = 0; i < lenght; i++){
            printCar(cars[i]);
    }
        
    return 0;
}

void printCar(Car car){
    printf("%s %d $%d\n",car.model,car.year, car.price);
};