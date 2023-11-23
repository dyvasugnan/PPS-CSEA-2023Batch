#include<stdio.h>
int main()
{ 
  int mat[2][2],count = 0;
  int i=0,j=0;
  printf("enter 4 values");
  for(i = 0; i < 2; i++)
    {
	  for(j = 0; j < 2; j++)
	  scanf("%d",&mat[i][j]);
    }
  for(i = 0;i < 2; i++)
    {
       for(j = 0; j < 2; j++)
        {
		if(mat[i][j] == 0){
		
            count++;
            break;
        }
        }
	}
	
  if(count > 0)
  {
  	printf("True");
  }
  else
    printf("False");
  return 0;
}
