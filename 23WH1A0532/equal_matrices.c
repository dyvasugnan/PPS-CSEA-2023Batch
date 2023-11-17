//this program is about the equality of matrices
#include<stdio.h>
int main(){
int a[10][10],b[10][10],r,c,i,j;
printf("enter rows and columns\n",r,c);
scanf("%d%d",&r,&c);
int count=0;
for(i=1;i<r;i++){
 for(j=1;j<c;j++){
  scanf("%d",&a[i][j]);
}
}
for(i=1;i<r;i++){
 for(j=1;j<c;j++){
  printf("%4d",a[i][j]);
}
printf("\n");
}
for(i=1;i<r;i++){
 for(j=1;j<c;j++){
  scanf("%d",&b[i][j]);
}
}
for(i=1;i<r;i++){
 for(j=1;j<c;j++){
  printf("%4d",b[i][j]);
}
printf("\n");
}
for(i=1;i<r;i++)
 for(j=1;j<c;j++){
 if (a[i][j]==b[i][j]){
 
count ++; 
}
}

if(count==9){
	printf("both are equal");
}
else
printf("both are not equal");
return 0;
}

