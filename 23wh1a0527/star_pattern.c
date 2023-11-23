//this is to display the star pattern
#include<stdio.h>
int main(){
int rows,columns,i,j;
printf("enter the number of rows and columns");
scanf("%d%d",&rows,&columns);
for(i=1;i<=rows;i++){
         for(j=1;j<=i;j++){
               printf("%4d",j);
}
printf("\n");
}
return 0;
}

