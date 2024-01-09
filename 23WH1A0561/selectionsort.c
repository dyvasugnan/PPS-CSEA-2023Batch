#include <stdio.h>

void selectionSort(int arr[], int n);

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
      int i;
	  for( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n);

    printf("\nSorted array: ");
      
	  for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
void selectionSort(int arr[], int n){

    int i, j, minIndex, temp;
    
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
           
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

