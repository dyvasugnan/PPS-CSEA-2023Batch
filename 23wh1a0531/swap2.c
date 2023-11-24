//swappping without temp
#include<stdio.h>
int main(){
int var1,var2;
printf("enter 2 numbers");
scanf("%d%d",&var1,&var2);
printf("the value of a before swapping=%d\nthe value of b before swapping=%d",var1,var2);
var1=var1+var2;
var2=var1-var2;
var1=var1-var2;
printf("the value of a after swapping=%d\nthe value of b after swapping=%d",var1,var2);
return 0;
}
