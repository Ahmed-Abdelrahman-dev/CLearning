#include <stdio.h>
#include <string.h>
#include <stdbool.h>


typedef struct{
    char name[50]; 
    int age;
    float gpa;
    bool isFullTime; 
} Student ;

void printStudent(Student student);

int main(){

    Student student1 = {"SpongPop", 34, 2.7, true};
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 48, 3.7, false};
    Student student4 ={0} ;



    strcpy(student4.name,"Sandy");
    student4.age = 12;
    student4.gpa = 4.0;
    student4.isFullTime = 1;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);


    return 0;
}

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %2.2f\n", student.gpa);
    printf("Student Type: %s\n", student.isFullTime ? "Full-time Student" : "Part-time Student");
    printf("\n");


}