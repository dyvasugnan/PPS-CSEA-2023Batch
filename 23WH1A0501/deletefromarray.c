#include<stdio.h>
int main(){
int a[100],range,position,i;
printf("Enter the range: ");
scanf("%d",&range);
printf("\nEnter %d numbers: ",range);
for(i=0;i<range;i++)
	scanf("%d",&a[i]);
printf("\nAt which position do you want to delete the element: ");
scanf("%d",&position);
for(i=position;i<range;i++)
	a[i]=a[i+1];
range--;
printf("After the deletion the dataset is: ");
for(i=0;i<range;i++)
	printf("\n%d",a[i]);
return 0;
}
