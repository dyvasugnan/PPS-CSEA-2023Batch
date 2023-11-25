#include <stdio.h>


int calculateFactorial(int);

int main() {
    int num, fact;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    fact = calculateFactorial(num);

    
    printf("Factorial of %d is: %d\n", num, fact);

    return 0;
}


int calculateFactorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}
