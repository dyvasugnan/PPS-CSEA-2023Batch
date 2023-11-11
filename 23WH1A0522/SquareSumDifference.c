#include <stdio.h>
int main() {
    int n=100,sqresum,sumsqre;
    sqresum= (n*(n+1)*((2*n)+1))/6;
    sumsqre= ((n*(n+1))/2)*((n*(n+1)/2));
    printf("square of sum of numbers: %d\n",sumsqre);
    printf("sum of squares of numbers: %d\n",sqresum);
    printf("sum square difference: %d",sumsqre-sqresum);
    return 0;
}
