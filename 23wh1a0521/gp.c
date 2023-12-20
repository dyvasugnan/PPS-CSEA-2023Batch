#include<stdio.h>
#include<math.h>
int main(){
	int base,power;
	printf("enter the base and power: ");
	scanf("%d%d",&base,&power);
	int res=1;
	for(int i=1;i<=power;i++){
		res=res+pow(base,i);
	}
	printf("%d",res);
	return 0;
}
