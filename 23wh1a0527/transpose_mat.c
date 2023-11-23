// this is to display the transpose of a matrix
#include<stdio.h>
int main(){
int mat[2][2];
printf("enter the elements of the matrix");
for(int i=0;i<2;i++){
      for(int j=0;j<2;j++){
           scanf("%d",&mat[i][j]);
          printf("%d ",mat[i][j]);
     }
printf("\n");
   }
for(int i=0;i<2;i++){
     for(int j=0;j<2;j++){
              if(j>i)
                    printf("%d ",mat[j][i]);
               else if(i>j)
                    printf("%d ",mat[j][i]);
               
              else
                   printf("%d ",mat[i][j]);
     
    
   }
   printf("\n");
}
return 0;
}

