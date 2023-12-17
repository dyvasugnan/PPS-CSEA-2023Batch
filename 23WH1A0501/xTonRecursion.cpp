#include<stdio.h>
int xToPowerN(int x , int n){
	if (n == 1)
		return x;
	return x * xToPowerN(x , n-1);
}

int main(){
	int num , power;
	printf("Enter the number and the power to raise it to: ");
	scanf("%d%d" , &num , &power);
	printf("\n%d" , xToPowerN(num , power));
}
