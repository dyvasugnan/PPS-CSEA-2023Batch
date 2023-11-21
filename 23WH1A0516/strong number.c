#include<stdio.h>
int main(){
	int num,i,sum=0,fact=1,rem;
	printf("enter number :");
	scanf("%d",&num);
	int temp=num;
	 while(num>0){
	 	rem=num%10;
	 	fact=1;
	 	for(i=1;i<=rem;i++){
	 		fact=fact*i;
		 }
		 sum=sum+fact;
		 num=num/10;
	 }
	 if(temp==sum){
	 printf("%d is a strong number...",temp);	
	 }
	 else{
	 	printf("%d is not a strong number...",temp);
	 }
	 return 0;
}
