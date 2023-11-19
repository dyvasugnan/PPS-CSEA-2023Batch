#include<stdio.h>
int main()
{
int a[3][3],b[3][3],i,j,count;
printf("enter elements of matrix 1");
for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 
 scanf("%d",&a[i][j]);

 for(i=0;i<3;i++){
 
 for(j=0;j<3;j++){
 
 printf("%d",a[i][j]);
}
 printf("\n");
}
printf("enter elements of matrix 2");
  for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 scanf("%d",&b[i][j]);
 for(i=0;i<3;i++){
 
 for(j=0;j<3;j++){
 
 
 printf("%d",b[i][j]);
 }
 printf("\n");
 }
 for(i=0;i<3;i++)
 
 for(j=0;j<3;j++)
 
 if(a[i][j]=b[i][j])
 
 count++;
 if(count=1);
 printf("matrix are equal");
 if(count=0)
 printf("not equal");
 return 0;
 
 }
