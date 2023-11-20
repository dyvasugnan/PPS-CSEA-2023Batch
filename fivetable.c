#include<stdio.h>
int main(){
int num,r,result;
printf("Enter a number");
scanf("%d",&num);
for (r=1;r<=3;r++){
result = num*r;
printf("%d*%d=%d\n",num,r,result);
}
return 0 ;
}
