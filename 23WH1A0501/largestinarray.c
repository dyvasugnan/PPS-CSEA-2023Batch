#include<stdio.h>
int main(){
int a[100],range,i,largest;
printf("Enter the range of the array(less than 100): ");
scanf("%d",&range);
printf("\nEnter %d integers: ",range);
for(i=0;i<range;i++)
	scanf("%d",&a[i]);
largest=a[0];
for(i=1;i<range;i++)
	if(a[i]>largest)
		largest=a[i];
printf("The largest number in the given data set is: %d",largest);
return 0;
}
