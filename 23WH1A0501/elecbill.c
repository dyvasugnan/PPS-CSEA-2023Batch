#include<stdio.h>
int main(){
printf("Enter the no of units of electricity consumed: ");
int unit;
float price;
scanf("%d",&unit);
if(unit<99){
	printf("The bill does not amount to a minimum of 100 rupees, which is mandatory.");
	}
else if(unit>=100&&unit<=199){
	price=unit*1.2;
	printf("%.2f rupees",price);
	}
else if(unit>=200&&unit<=399){
	price=unit*1.6;
	if(unit<=375){
		printf("%.2f rupees",price);
	}
	else{
		price*=1.15;
		printf("%.2f rupees",price);
	}
}
else{
	price=unit*2.15;
	printf("%.2f rupees",price);
}
return 0;
}



