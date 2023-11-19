#include<stdio.h>
#include<string.h>
void main()
{
   int mat1[3][3],count=0,i,j;
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
           if(i>j)
           {
           if(mat1[i][j]==0);
           {
               count=count+1;
           }
           }
		}
	}
 if(count==3)
	printf("Matrix is upper triangular");
    
}
