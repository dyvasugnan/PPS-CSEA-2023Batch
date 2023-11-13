#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int num;
    scanf("%d", &num);
    int rem,sum=0;
    while (num!=0) {
        rem = num%10;
        sum += rem;
        num /= 10;
    }
    printf("%d",sum);
    return 0;
}
