#include<stdio.h>
#include<limits.h>
int main(){
	int arr[5]={23,8,4,10,90};
	int max=arr[0],smax=INT_MIN;
	int i;
	for(i=0;i<5;i++){
		if(arr[i]>max)
		max=arr[i];
		
	}
	for(i=0;i<5;i++){
		if(arr[i]!=max){
		           if(arr[i]>smax)
				   smax=arr[i];	
		            }
	}
	printf("second maximum element of array is %d",smax);
}
