#include<stdio.h>
int main(){
	int arr[5]={1,7,9,45,10};
	int x=10,temp,i;
	for(i=0;i<5;i++){
		if(arr[i]==x){
		temp=1;
		
		break;
		        }

	}
	if(temp==1)
	printf("present at index %d",i);
	else printf("not present");
return 0;	
}
