//this is my program for voting
#include<stdio.h>
int main(){
int n;
printf("enter your age: ");
scanf("%d",&n);
if (n>=18)
printf("eligible for voting",n);
else 
{
printf("not eligible for voting",n);
}
return 0;
}
