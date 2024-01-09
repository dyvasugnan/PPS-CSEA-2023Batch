#include <stdio.h>

// Function to perform linear search using pointers
int linearSearch(const int *arr, int size, int key);
  
int main() {
    int size, key,i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

   
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to search: ");
    scanf("%d", &key);

  
    int result = linearSearch(arr, size, key);

  
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
int linearSearch(const int *arr, int size, int key) {
	int i;
    for ( i = 0; i < size; ++i) {
        if (*arr == key) {
            return i; 
        }
        arr++; 
    }
    return -1; 
}
