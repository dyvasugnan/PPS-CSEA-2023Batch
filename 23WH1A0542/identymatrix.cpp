#include<stdio.h>
int main()
{
	int a[3][3],i,j,count=0,count1=0;
	printf("enter elements of matrix:\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	if(i=j){
	if(a[i][j]=1)
	count++;
}
}
}
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	if(i!=j){
	if(a[i][j]=0)
	count1++;
}
}
}
if(count==3&&count1==6)
printf("identity matrix");
else
printf("not an identy matrix");
	
return 0;	    	
}
