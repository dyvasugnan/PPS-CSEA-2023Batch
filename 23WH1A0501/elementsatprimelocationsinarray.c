#include<stdio.h>
int main(){
int a[100],range,i,j,count;
printf("Enter the range: ");
scanf("%d",&range);
printf("\nEnter %d numbers: ",range);
for(i=0;i<range;i++)
	scanf("%d",&a[i]);
printf("Then, the elements at prime postions are: ");
for(i=0;i<range;i++){
	count=0;
	for(j=1;j<=i;j++)
		if(i%j==0)
			count++;
	if(count==2)
		printf("\n%d",a[i]);
	}
return 0;
}
