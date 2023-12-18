#include<stdio.h>
void swap(int*,int*);
void insertion_sort(int[],int);
int truck_count(int[],int,int);
int main(){
	int num,capacity,i,result;
	printf("enter no. of godowns");
	scanf("%d", &num);
	printf("enter the maximum capacity of truck");
	scanf("%d", &capacity);
	int weight[num];
	printf("enter the weights of each godown");
	for(i=0;i<num;i++){
		scanf("%d", &weight[i]);
	}
	insertion_sort(weight,num);
	result = truck_count(weight,num,capacity);
	printf("the minimum no of trucks are: %d",result);
	}
void insertion_sort(int weight[],int num){
	int i,key;
	for(i=0;i<num;i++){
		key =weight[i];
		int j =i-1;
		while(key < weight[i] && j>=0){
			weight[j+1] = weight[j];
			j--;
		}
		weight[j+1] = key;
	}
}
void swap(int*n1,int*n2){
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
int truck_count(int weight[] ,int num,int capacity){
	int i,count=0;
	for(i=num-1; i>=0; i--){
		if(weight[i]!=0 ){
			if(weight[i] + weight[i-1] <= capacity){
					count++;
				}
			}
		}
	return count;
}	
	
