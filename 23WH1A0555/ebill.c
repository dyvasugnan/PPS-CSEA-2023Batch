#include<stdio.h>
int main()
{

float units;
float amt,charge;
printf("enter units:");
scanf("%f",&units);
if(units<99)
{amt=units*0.9;
}
else if(units>=100&&units<199)
 { amt=units*1.2;
  }
else if(units>=200&&units<399)
 { amt=units*1.6;}
else if(units>=400)
  amt=units*2;
  
else{
 amt=amt+0.15;}

printf("amt=%f",amt);
}









