#include<stdio.h>
int search_element(int[],int,int);
int main(){
	int size,key;
	int a[100];
	printf("Enter size");
	scanf("%d",&size);

	int i;
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter key");
	scanf("%d",&key);
	
	int result=search_element(a,size,key);
	if(result==-1)     printf("Not found");
	else               printf("Found in %d index",result);
	
}

int search_element(int a[],int size,int key){
	int i;
	for(i=0;i<size;i++){
		if(a[i]==key){
		
		            return i;
		            break;
		        }
		
	}



return -1;
}

