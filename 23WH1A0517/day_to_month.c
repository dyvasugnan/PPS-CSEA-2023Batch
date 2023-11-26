//day to month
#include<stdio.h>
int main()
{
	int days,month;
	scanf("%d",&days);
	int days1=days%30;
	month=days/30;
	printf("%d months and %d days",month,days1);
}
