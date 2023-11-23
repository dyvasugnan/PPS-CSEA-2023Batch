//this program is to display the s.i
#include<stdio.h>
int main(){
int principleamount,time,rtofint,simpleint;
printf("give 3 numbers");
scanf("%d%d%d",&principleamount,&time,&rtofint);
simpleint=(principleamount*time*rtofint)/100;
printf("simpleinterest=%d",simpleint);
return 0;
}
