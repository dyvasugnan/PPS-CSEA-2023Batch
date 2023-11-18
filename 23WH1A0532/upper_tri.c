// this program is about the upper triangle matrix 
#include<stdio.h>
int main(){
int a[10][10],i,j,r,c;
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
int count=0;
 for(i=0;i<r;i++){
 
  for(j=0;j<c;j++){
  
  if(i>j){
  	if(a[i][j]==0){
  		count++;
	  }
}
}
}

if(count==3)
  printf("upper triangle");
else{
	printf("not an upper triangle");
}
return 0;
}

