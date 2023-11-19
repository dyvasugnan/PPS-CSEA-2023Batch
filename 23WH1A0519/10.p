#include<stdio.h>
#include<string.h>
void main()
{
   int mat1[3][3],sum=0,i,j;
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
           if(i==j)
           sum=sum+mat1[i][j];
		}
	}
 
	printf("%d",sum);
    
}
