//to use pointers to add and subtarct integers using functions.
//HACKERRANK SUM:
#include <stdio.h>

void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    if(temp > *b)
        *b = temp - *b;
    else
        *b = *b - temp;
return *a,*b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
