#include<stdio.h>
int main()
{
int t1=0,t2=1,t3,i,n;
printf("enter n value:");
scanf("%d",&n);
printf("%d\t%d\t",t1,t2);
for(i=1;i<=n;i++)
	{t3=t1+t2;
	 t1=t2;
	 t2=t3;
	 printf("%d \t",t3);
	
}

return 0;

}



