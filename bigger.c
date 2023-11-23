//3 num which is bigger
#include<stdio.h>
int main (){
int n1,n2,n3;
printf("Enter any number");
scanf("%d%d%d,&n1,&n2,&n3");
if(n1>n2&&n1>n3)
{
  printf("number 1 is greatest");
}
if(n2>n1&&n2>n3)
{
  printf("number 2 is greatest");
}
if(n3>n1&&n3>n2)
{
  printf("number 3 is greatest");
}
return 0;
}
