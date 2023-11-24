//swap with temp
#include <stdio.h>
int main(){
int var1,var2,temp;
printf("enter 2 numbers");
scanf("%d%d",&var1,&var2);
printf("the value of a before swapping = %d\nthe value of b before swapping = %d\n",var1,var2);
temp=var1;
var1=var2;
var2=temp;
printf("the value of a after swapping = %d\nthe value of b after swapping = %d",var1,var2);
return 0;
}
