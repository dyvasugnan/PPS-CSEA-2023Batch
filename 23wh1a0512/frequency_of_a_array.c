#include<stdio.h>
int main(){
int freq=0,a[100],range,i,num;
printf("Enter the range: ");
scanf("%d",&range);
printf("Enter %d numbers: ",range);
for(i=0;i<range;i++)
	scanf("%d",&a[i]);
printf("Enter another number: ");
scanf("%d",&num);
printf("The frequency of the number %d in the given data set is: ",num);
for(i=0;i<range;i++)
	if(a[i]==num)
		freq++;
printf("%d",freq);
return 0;
}
