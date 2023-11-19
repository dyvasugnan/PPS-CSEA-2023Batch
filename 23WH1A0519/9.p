#include<stdio.h>
#include<string.h>
void main()
{
   int mat1[3][3],flag=0,i,j,mat2[3][3];
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&mat1[i][j]);
       }
   }
    for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&mat2[i][j]);
       }
   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if (mat1[i][j]==mat2[i][j])
			{
				flag++;
			}
		}
	}
 
	if (flag == 9)
	{
		printf ("Equal matrices");
	}
}
