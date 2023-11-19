//To copy elements of array using loop
#include<stdio.h>
int main(){
	int arr1[20], arr2[20], num;
	printf("Enter the number of elements: ");
	scanf("%d", &num);
	printf("Enter %d numbers: ", num);
	for(int i = 0; i < num; i++){
		scanf("%d",&arr1[i]);
		}
	for(int i = 0; i < num; i++){
		arr2[i] = arr1[i];
		}
	for (int i = 0; i < num; i++){
		printf("\n%d",arr2[i]);
		}
	return 0;
}
