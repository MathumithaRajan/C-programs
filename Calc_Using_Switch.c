/*
***** Calculator using switch ******
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    float a, b;
    char op;
    float results;

    // Enter two numbers
    printf("Enter the numbers: ");
    scanf("%f %f", &a, &b);

    
    // Enter the operation to be performed
    printf("Enter the operation to be performed: +  or  -  or *  or /");
    scanf(" %c", &op); 

    // Switch statements to perform the operation
    switch(op) {
        case '+': 
            results = a + b;
            break;
        case '-':
            results = a - b;
            break;
        case '*':
            results = a * b;
            break;
        case '/':
            results = a / b;
            break;
        default: 
            printf("INVALID OPERATION");
            exit(0);
    }

    printf("The result is: %f", results);

    return 0;
}