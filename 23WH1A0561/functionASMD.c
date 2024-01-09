#include <stdio.h>

float add(float a, float b) {
    return a + b;
}


float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}


float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main() {
    float num1, num2;

 
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    
    printf("Sum: %.2f\n", add(num1, num2));
    printf("Subtraction: %.2f\n", subtract(num1, num2));
    printf("Multiplication: %.2f\n", multiply(num1, num2));
    printf("Division: %.2f\n", divide(num1, num2));

    return 0;
}
