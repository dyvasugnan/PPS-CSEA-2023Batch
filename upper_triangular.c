#include<stdio.h>
int main()
{
	int mat[3][3],i,j,ct = 0;
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
		    scanf("%d",&mat[i][j]);
		}
	}
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
		    if(i-j > 0 && mat[i][j] == 0)
		    
		     ct++;
		}
	}
	if(ct == 3)
	printf("it is upper triangular matrix");
	else
	printf("it is not upper triangular matrix");
	
}
