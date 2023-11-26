//subjets avg
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,s6;
	int sum=0,avg=0;
	printf("enter 6 subject's marks:");
	scanf("%d %d %d %d %d %d",&s1,&s2,&s3,&s4,&s5,&s6);
	sum=s1+s2+s3+s4+s5+s6;
	avg=sum/6;
	printf("%d is the avg",avg);
	return 0;
	
}
