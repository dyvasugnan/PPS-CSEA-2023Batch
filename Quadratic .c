#include<stdio.h>
int main(){
int a,b,c;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if((b*b)-(4*a*c)>=O){
  printf("real root");
}
else{
printf("common root");
}
float root1=(-b+sqrt((b*b)-(4*a*c))/2*a;
float root2=(-b-sqrt((b*b)-(4*a*c))/2*a;
    printf("roots are=%2f,%.2f",root1,root2);
}
