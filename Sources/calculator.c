#include <stdio.h>
#include <stdlib.h>


// creating calculator program.

/*
Requirement
1. prompt user to add a number
2. decide user to add, multiply, add, divide

*/


double add(double numParam1, double numParam2){
    return numParam1 + numParam2;
};

double substract(double numParam1, double numParam2){
    return numParam1 - numParam2;
};

double divide(double numParam1, double numParam2){
    return numParam1 / numParam2;
};

double multiply(double numParam1, double numParam2){
    return numParam1 * numParam2;
};

int main(){

    double num1;
    double num2;
    char op;

    printf("Enter a number : ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number : ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%lf",add(num1, num2));
    }
    else if(op == '-'){
        printf("%lf",substract(num1, num2));
    }
    else if(op == '/'){
        printf("%lf",divide(num1, num2));
    }
    else if(op == '*'){
        printf("%lf",multiply(num1, num2));
    }
    else{
        printf("%s","Operator not correct");
    }


    return 0;
}