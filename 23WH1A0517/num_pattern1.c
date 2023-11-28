/*123
123
123*/
#include<stdio.h>
int main()
{
	int i,j,num;
	printf("enter number of rows");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
