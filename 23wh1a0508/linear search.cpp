#include<stdio.h>

int linear(int [],int,int);
main(){
	int array[100],size,key;
	printf("enter size");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
		printf("enter key element");
	scanf("%d",&key);

int ans=linear(array,size,key);
if(ans==-1)
printf("not found");
else
printf(" found in %dth index",ans);
}
int linear(int array[],int size,int key){
	for(int i=0;i<size;i++){
		if(array[i]==key){
		
		return i;
		break;}
	}

	return -1;}

