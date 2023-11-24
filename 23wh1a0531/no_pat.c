// number patterns
#include<stdio.h>
int main(){
int rows,clms;
printf("enter no. of rows and columns");
scanf("%d%d",&rows,&clms);
for(int i=1;i<=rows;i++){
   for(int j=1;j<=clms;j++){
      printf("%4d",j);
   }
printf("\n");
}
return 0;
}
