#include<stdio.h>
int main(){
	float sur_charge,tot_amt=0,amt;
	int units;
	scanf("%d",&units);
	if(units>99)
		amt=units*0.90;
	else if(units>=100&&units<=199)
		amt=89.1+((units-99)*1.2);
	else if(units>=200&&units<=399)
		amt=238.8+((units-199)*1.6);
	else
		amt=638+((units-300)*2);
	sur_charge=amt*0.2;
	tot_amt=amt+sur_charge;
	printf("bill:%f",tot_amt);
	

}
