#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,d;
printf("Enter the values of a, b and c for a quadratic equation: ");
scanf("%d%d%d",&a,&b,&c);
d= b*b-4*a*c;
float s=sqrt(d);
float x1,x2;
if(d>=0){
x1=(0-b-s)/(2*a);
x2=(0-b+s)/(2*a);
printf("The given equation had two real roots, %.2f and %.2f",x1,x2);
}
else{
printf("The given equation has imaginary roots");
}
return 0;
}

