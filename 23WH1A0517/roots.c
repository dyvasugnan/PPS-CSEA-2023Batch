//roots 
#include<stdio.h>
int main()
{
int a,b,c,D;
printf("enter a,b,c");
scanf("%d %d %d",&a,&b,&c);
D=b*b-(4*a*c);
if(D>0)
	printf("real and distinct");
else if (D==0)
	printf("real and equal");
else
	printf("imaginary");
return 0;


}
