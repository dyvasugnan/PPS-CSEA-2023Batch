#include<stdio.h>
int count_coprimes(int l,int r){
	int count=l+r/2;
	return count;
}
int main(){
	int left,right;
	scanf("%d %d",&left,&right);
	int result=count_coprimes(left,right);
	printf("%d",result);
	
}
