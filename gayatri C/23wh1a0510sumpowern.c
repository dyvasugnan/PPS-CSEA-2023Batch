#include <stdio.h>
int main() {
    int T, i, res, rem, sum, j;
    scanf("%d", &T);
    int N[100]; // or any fixed size that you expect
    for (j = 0; j < T; j++) {
        scanf("%d", &N[j]);
    }
    for (j = 0; j < T; j++) {
        res = 1;
        sum = 0;
        for (i = 0; i < N[j]; i++) {
            res = res * 2;
        }
        while (res > 0) {
            rem = res % 10;
            sum += rem;
            res /= 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
