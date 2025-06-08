#include <stdio.h>
#include <string.h>

int main(){

int age = 0;
float gpa = 0.0f;
char grade = '\0';
char name[30] = "";




printf("Please enter your age:\t");
scanf("%d", &age);
printf("Please enter your gpa:\t");
scanf("%f", &gpa);
printf("Please enter your grade:\t");
scanf(" %c", &grade); 
getchar();
printf("Please enter your name:\t");
fgets(name,sizeof(name),stdin);
name[strlen(name)-1] = '\0';


printf("%s\n", name);
printf("%d\n", age);
printf("%f\n", gpa);
printf("%c\n", grade);



//printf("Your age is:\t%d",age);


return 0 ;
}