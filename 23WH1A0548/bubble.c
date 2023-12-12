//this is my bubble sort of elements
#include<stdio.h>
void bubbleSort(int arr[],int n){
int i,j,temp;
for(i=0;i<n;i++){
 for(j=i+1;j<n;j++){
  if(arr[i]>arr[j]){
  temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
  }
 }
}
}
int main(){
int n;
printf("enter number of elements in the array: ");
scanf("%d",&n);
int arr[n];
printf("enter elements: ");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
bubbleSort(arr,n);
printf("sorted array: ");
for(int i=0;i<n;i++){
printf("%d",arr[i]);
}
printf("\n");
return 0;
}	
