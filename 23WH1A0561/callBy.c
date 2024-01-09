#include <stdio.h>

void callByValue(int x, int y);
void callByReference(int *x, int *y);

int main() {
    int num1 = 5, num2 = 10;

    printf("Before Call by Value: num1 = %d, num2 = %d\n", num1, num2);
    callByValue(num1, num2);
    printf("After Call by Value: num1 = %d, num2 = %d\n", num1, num2);

    printf("\nBefore Call by Reference: num1 = %d, num2 = %d\n", num1, num2);
    callByReference(&num1, &num2);
    printf("After Call by Reference: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

void callByValue(int x, int y) {
    x = x * 2;
    y = y * 2;
    printf("Inside Call by Value: x = %d, y = %d\n", x, y);
}

void callByReference(int *x, int *y) {
    *x = *x * 2;
    *y = *y * 2;
    printf("Inside Call by Reference: x = %d, y = %d\n", *x, *y);
}
