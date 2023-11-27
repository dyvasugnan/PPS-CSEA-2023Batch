#include<stdio.h>
#include<stdbool.h>
bool isArmstrong(int);
	
int main(){
	
	int num;
	printf("Enter a no:");
	scanf("%d",&num);
	bool ans=isArmstrong(num);
	if(ans==1) printf("Armstrong no");
	else printf("Not a Armstrong no");
}
bool isArmstrong(int n){
	int temp=n;
	int rem,sum_cubes=0;
	int i;
	while(n!=0){
		rem=n%10;
		sum_cubes=sum_cubes+rem*rem*rem;
		n/=10;
		i++;
	}
	if(temp==sum_cubes)
	                 return 1;
	else             return 0;
	
}
