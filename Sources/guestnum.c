#include <stdio.h>
#include <stdlib.h>

// creating madlibs game

// function declaration
void sayHi(char nameParam[]);
double cube(double num);
int max (int numParam1, int numParam2);

int main(){

int num1 = 24;
int num2 = 50;


printf("Max Number are %d", max(num1, num2));


};

// function definition
void sayHi(char nameParam[]) {
    printf("Hello %s. \n", nameParam);
    printf("nice to meet you \n");
};

// simple math function
double cube(double num){
    double result = num * num * num;
    return result;
};

int max (int param1, int param2){
    int result;
    if(param1 > param2){
        result = param1;
    }
    else
    {
        result = param2;
    };

    return result;
};
