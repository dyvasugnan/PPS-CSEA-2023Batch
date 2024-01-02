#include <stdio.h>

int main() {
    int limit = 4000000;
    int sum = 0;
    int a = 1, b = 2;

    while (b <= limit) {
        if (b % 2 == 0) {
            sum += b;
        }

        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    printf("Sum of even Fibonacci terms below %d: %d\n", limit, sum);

    return 0;
}