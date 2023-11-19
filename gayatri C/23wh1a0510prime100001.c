#include<stdio.h>
void main() {
    int i, j, count, sum = 0;
    for (i = 2;i>1 ; i++) {
        count = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0)
                count += 1;
        }
        if (count == 0) {
            sum++;
            if (sum == 10001)
                break;
        }
    }
    printf("The 10,001st prime number is: %d\n", i);
}