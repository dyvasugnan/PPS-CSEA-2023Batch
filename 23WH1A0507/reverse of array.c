#include<stdio.h>
int main(){
	int arr1[5]={2,6,9,4,3};
	int arr2[5];
	int i,j=0;
	for(i=4;i>=0;i--){
		arr2[j]=arr1[i];
		j++;
	}
	for(j=0;j<5;j++){
	
	printf("%d ",arr2[j]);
}
return 0;
}
