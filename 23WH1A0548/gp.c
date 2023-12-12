//this is my geometric progression program
#include<stdio.h>
int main(){
int x,n,sum=0,term=1;
printf("enter the base x value and n value: ");
scanf("%d%d",&x,&n);
for(int i=0;i<n;i++){
term*=x;
sum+=term;
printf("%4d",term);
}
printf(" sum of gp is %d",sum+1);
return 0;
}


