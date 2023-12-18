#include<stdio.h>
#include<math.h>
int main(){
	int base , power , i , sign=1;
	float  sum = 1,term;
	printf("enter base and power");
	scanf("%d%d",&base , &power);
	for(i = 1;i<=power;i++){
		sign = sign*(-1);
		term = pow(base , i)*sign;
		term = term/(2.0*i);
		sum+=term;
	}
	printf("%0.1f",sum);
	return 0;
}
		
	
