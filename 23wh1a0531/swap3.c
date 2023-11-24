//swapping characters
#include<stdio.h>
int main(){
char var1,var2,temp;
printf("enter 2 charecters");
scanf("%c%c",&var1,&var2);
temp=var1;
var1=var2;
var2=temp;
printf("the value of a after swapping=%c\nthe value of b after swapping=%c",var1,var2);
return 0;
}


