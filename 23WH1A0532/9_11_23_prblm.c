//write a program to find out sum of elemnts of a array using pointers
#include<stdio.h>
int main(){
	int * p,a[10],n,i,sum=0;
	p=&a[0];
	printf("enter a n value");
	scanf("%d",&n);
	printf("enter terms");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	for(i=0;i<n;i++)
	{
		sum=sum + *(p+i);
	}
	printf("sum = %d",sum);
	return 0;
}

