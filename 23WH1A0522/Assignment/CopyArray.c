//copying an array into another array
#include<stdio.h>
void main(){
    int arr1[20],arr2[20],size,i;
    printf("enter number of elements in an array: ");
    scanf("%d",&size);
    printf("enter the elements in an array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<size;i++){
        arr2[i]=arr1[i];
    }
    printf("array 1 elements :");
    for(i=0;i<size;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("array 2 elements :");
    for(i=0;i<size;i++){
        printf("%d ",arr2[i]);
    }
}
