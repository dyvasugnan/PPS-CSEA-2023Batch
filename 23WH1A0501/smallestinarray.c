#include<stdio.h>
int main(){
int a[100],range,i,smallest;
printf("Enter the range: ");
scanf("%d",&range);
printf("\nEnter %d integers: ",range);
for(i=0;i<range;i++)
	scanf("%d",&a[i]);
smallest=a[0];
for(i=1;i<range;i++)
	if(a[i]<smallest)
		smallest=a[i];
printf("\nThe smallest number in the given data set is: %d",smallest);
return 0;
}
