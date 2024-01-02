#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exiting with an error code
    }

    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of elements in the array: %d\n", sum);

    free(ptr);
    return 0;  // Exiting successfully
}