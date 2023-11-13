#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sum = 0, a[1000], range;
    scanf("%d", &range);
    for(int i = 0; i < range; i++){
        scanf("%d", &a[i]);
        sum += a[i];}
    printf("%d", sum);
    return 0;
}
