#include <stdio.h>

int main() {
    int size, n;
int i,j;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter elements of the array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &n);

    n = n % size; 

    for ( i = 0; i < n; i++) {
        int firstElement = array[0];

        for ( j = 0; j < size-1; j++) {
            array[j] = array[j + 1];
        }

        array[size-1] = firstElement;
    }

    printf("Rotated array:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}



