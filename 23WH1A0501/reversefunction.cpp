#include<stdio.h>
int reverse(int num){
	int n = num , revno = 0 , rem;
	while(n != 0){
		rem = n % 10;
		revno = revno * 10 + rem;
		n /= 10;
	}
	return revno;
}
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d" , &num);
	int revnum = reverse(num);
	printf("%d" , revnum);
	return 0;
}
