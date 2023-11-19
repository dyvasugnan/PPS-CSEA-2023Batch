// this program is about the identity matrix
#include<stdio.h>
int main(){
int a[10][10],r,c,i,j,count=0,count1=0;
printf("enter rows and columns");
scanf("%d %d",&r,&c);
 for(i=0;i<r;i++){
  for(j=0;j<c;j++){
  	scanf("%d",&a[i][j]);
  }
}
  printf("\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
  	if(i==j){
  	 if(a[i][j]==1)
  	 count++;
  	 }
  }
}
  for(i=0;i<r;i++){
  	for(j=0;j<c;j++){
      	if(i!=j)
  	 		if(a[i][j]==0)
  	 	count1++;
    }
  }
  if(count==3&&count1==6){
  printf("identity matrix");
}
  else{
  printf("not an identity matrix");
 }
 return 0;
  }
