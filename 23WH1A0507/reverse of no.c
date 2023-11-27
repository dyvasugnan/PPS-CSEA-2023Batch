#include<stdio.h>
int reverseNo(int);
int main(){
	int num;
	printf("Enter a no");
	scanf("%d",&num);
	int ans=reverseNo(num);
	printf("The reverse is %d",ans);
}
int reverseNo(int n){
	int rem,rev_no=0;
	int i;
	while(n!=0){
		rem=n%10;
		n/=10;
		rev_no=rev_no*10+rem;
		
	}
	return rev_no;
}
