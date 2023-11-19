#include<stdio.h>
int main()
{
	int mat[3][3],mat1[3][3],i,j,ct = 0;
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
		    scanf("%d",&mat1[i][j]);
		}
	}
	
	for(i = 0 ; i < 3; i++)
	{
		for(j = 0 ; j < 3 ; j++)
		{
		    if(mat[i][j] == mat1[i][j])
		    
		     ct++;
		}
	}
	if(ct == 9)
	printf("it is equal matrices");
	else
	printf("it is not equal matrices");
	
}

