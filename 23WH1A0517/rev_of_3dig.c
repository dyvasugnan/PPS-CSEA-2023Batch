//rev of 3 digit
#include<stdio.h>
int main()
{
	int num;
	int temp,l_dig,f_dig;
	int s_dig,rev_num=0;
	scanf("%d",&num);//956;

	f_dig=num/100;
    s_dig=(num/10)%10;
    l_dig=num%10;
	rev_num=(100*l_dig)+(10*s_dig)+(1*f_dig);//100*6+10*5+1*9=659
	printf("%d",rev_num);
}
