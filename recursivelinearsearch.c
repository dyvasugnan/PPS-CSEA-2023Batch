#include <stdio.h>

int linearSearchRecursive(int arr[], int key, int index, int size) {
    // Base case: if the element is not present in the array
    if (index == size) {
        return -1;
    }

    // If the current element is equal to the key, return the index
    if (arr[index] == key) {
        return index;
    }

    // Recursive case: search in the rest of the array
    return linearSearchRecursive(arr, key, index + 1, size);
}

int main() {
    int arr[] = {10, 5, 2, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int result = linearSearchRecursive(arr, key, 0, size);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
   