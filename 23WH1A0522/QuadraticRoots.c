//to find roots of quadratic
#include<stdio.h>
#include<math.h>
main(){
int a,b,c;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if((b*b)-(4*a*c)>=0){
printf("real roots");
}
else{
printf("complex roots");
}
float root1=(-b+sqrt((b*b)-(4*a*c)))/2*a;
float root2=(-b-sqrt((b*b)-(4*a*c)))/2*a;
printf("roots are=%.2f,%.2f",root1,root2);
return 0;
}
