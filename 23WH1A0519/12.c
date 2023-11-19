#include<stdio.h>
#include<string.h>
void main()
{
   int mat[3][3],flag=0,i,j;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&mat[i][j]);
       }
   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if (i == j && mat[i][j] != 1)
			{
				flag = -1;
				break;
			}
			else if (i != j && mat[i][j]!= 0)
			{
				flag = -1;
				break;
			}
		}
	}
 
	if (flag == 0)
	{
		printf ("It is a IDENTITY MATRIX");
	}
{
    
}
}
