//this is to display the star pattern
#include<stdio.h>
int main(){
int i,j,rows,columns;
printf("enter number of rows and columns");
scanf("%d%d",&rows,&columns);
for(i=1;i<=rows;i++){
       for(j=1;j<=columns;j++){
              if(i==1||i==rows||j==1||j==columns)
                 printf("*");
else
  printf(" ");
}
printf("\n");
}
return 0;
}
