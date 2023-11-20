#include<stdio.h>
int main(){
int o;
printf("enter the order of matrix: ");
scanf("%d",&o);
int mat[0][0],count=0,i,j;
printf(" enter the element of matrix: ");
for(i=0;i<o;i++){
  for(j=0;j<o;j++){
       scanf("%d",&mat[i][j]);
  }
}
for(i=0;i<o;i++){
   for(j=0;j<o;j++){
       printf("%d",mat[i][j]);
       if(i>j)
         if(mat[i][j]!=0)
           count=1;
   }
           
      

      
     
