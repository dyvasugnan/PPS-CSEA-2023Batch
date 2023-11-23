#include <stdio.h>
int main() {
    int num;
    int digitCount[10] = {0}; 
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }
    printf("Digit Frequency:\n");
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {
            printf("Digit %d: %d times\n", i, digitCount[i]);
        }
    }
    return 0;
}