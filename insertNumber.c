#include <stdio.h>

void insertNumber(int arr[], int size, int location, int number) {
    if (location < 0 || location >= size) {
        printf("Invalid location. Please choose a valid index.\n");
        return;
    }

    // Shift elements to make space for the new number
    for (int i = size - 1; i > location; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number at the specified location
    arr[location] = number;

    // Print the updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, location, number;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the location to insert the number: ");
    scanf("%d", &location);

    printf("Enter the number to insert: ");
    scanf("%d", &number);

    insertNumber(arr, size, location, number);

    return 0;
}