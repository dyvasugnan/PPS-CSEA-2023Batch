// this program is about the sum of the diagonal elements
#include<stdio.h>
int main(){
int a[10][10],i,j,r,c,sum_dia_nums=0;
printf("enter rows and columns",r,c);
scanf("%d%d",&r,&c); 
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
   scanf("%d",&a[i][j]);
}
}
 for(i=0;i<r;i++){
   for(j=0;j<c;j++){
    printf("%4d",a[i][j]);
}
printf("\n");
}
 for(i=0;i<r;i++)
  for(j=0;j<c;j++)
  if(i==j){
  sum_dia_nums=sum_dia_nums+a[i][j];
 
}
printf("%d",sum_dia_nums);
return 0;
}
