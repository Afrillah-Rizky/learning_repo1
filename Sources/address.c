#include <stdio.h>
#include <stdlib.h>


int main() {
    
    // regarding memory address

    // pointer variable is a variable that store memory address
    int age = 30;
    int  *pAge = &age;
    double gpa = 3.4;
    double *pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;

    // create a pointer variable, inside it , store another variable inside that program



    // accessing (print out) the memory address
    printf("age: %p\ngpa: %p\ngrade: %p\n\n", &age, &gpa, &grade);  //%p stands for pointer, &to locate the memory address not the value of variable

    printf("memory address of pAge : %p\n", pAge);
    // dereferencing it means when you access the actual data of the pointer instead of the memory address
    printf("using deReference of pAge : %d", *pAge);
    // 
    

    return 0;
}
