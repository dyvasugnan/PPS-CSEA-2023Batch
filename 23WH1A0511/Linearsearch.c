#include<stdio.h>
int linear_search(int[],int,int);
int main(){
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int num[n],k;
	printf("enter the %d elements of array: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&num[i]);
	printf("enter the key to be found: ");
	scanf("%d",&k);
	int key_position=linear_search(num,n,k);
	printf("%d is found in %d position.",k,key_position);
	return 0;
}
int linear_search(int x[],int n,int a){
	int res;
	for(int i=0;i<n;i++){
		if(x[i]==a)
			res=i+1;
	}
	return res;
}
