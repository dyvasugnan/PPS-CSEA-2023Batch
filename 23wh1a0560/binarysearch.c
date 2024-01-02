#include<stdio.h>
void printarray(int [],int);
int binarysearch(int [],int,int,int);
void insertionsort(int [],int);
int main() {
int a[100],n,key,i;
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the array elements : ");
for(i=0;i<n;i++) 
	scanf("%d",&a[i]);
printf("Enter the key to search = ");
scanf("%d",&key);
insertionsort(a,n);
printarray(a,n);
printf("\n");
int result = binarysearch(a,key,0,n-1);
if(result == 1) 
	printf("Number is present");
else
	printf("Number is not present");
return 0;
}
void printarray(int a[],int n) {
int i;
for(i=0;i<n;i++) 
	printf("%d ",a[i]);
}
int binarysearch(int a[],int key,int low,int high) {
int midindex,result;
while(low<=high) {
	midindex=(low+high)/2;
	if(a[midindex]==key) {
		return 1;
		if(a[midindex]<key) 
			low=midindex+1;
		else
			high=midindex-1;
	}
	else
		return 0;
}
}
void insertionsort(int a[],int n) {
int step,key,i,j;
for(step=0;step<n;step++) {
	key=a[step];
	j=step-1;
	while (key<a[j] && j>=0) { 
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=key;
}
}
