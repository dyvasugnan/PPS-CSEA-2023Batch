#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    int i;
	for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 42};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 16;

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }
}
