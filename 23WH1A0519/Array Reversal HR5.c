#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, arr[1000], i;
    scanf("%d", &num);
for(i = 1; i <=num; i++) {
        scanf("%d", arr + i);
    }

    

    for(i = num; i>0; i--)
        printf("%d ", *(arr + i));
    return 0;
}
