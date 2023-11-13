#include<stdio.h>
int main(){
    int a[1000], range, i;
    scanf("%d",&range);
    for (i = 0; i < range; i++) {
        scanf("%d", &a[i]);
    }
    for (i = range-1; i >= 0; i--) {
    printf("%d ", a[i]);
    }
    return 0;
}
