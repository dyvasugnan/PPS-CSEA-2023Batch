#include<stdio.h>
int main(){
	int num;
	int count[10]={0};
	printf("enter a no");
	scanf("%d",&num);
	int i,rem,j;
for(i=0;num!=0;i++){
	rem=num%10;
	num/=10;
	for(j=0;j<=9;j++){
	
	
	if(rem==j){
		count[j]++;
		
	}
}

}
for(i=0;i<=9;i++){
	printf("frequency of %d = %d\n",i,count[i]);
}
}
