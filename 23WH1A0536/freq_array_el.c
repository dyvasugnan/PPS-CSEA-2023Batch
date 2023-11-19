//To find the frequency of an element in array
#include<stdio.h>
int main(){
int freq=0,a[100],range,i,num;
printf("Enter the range: ");
scanf("%d",&range);
printf("Enter %d numbers: ",range);
for(i=0;i<range;i++)
	scanf("%d",&a[i]);
printf("Enter number: ");
scanf("%d",&num);
printf("The frequency of %d is: ",num);
for(i=0;i<range;i++)
	if(a[i]==num)
		freq++;
printf("%d",freq);
return 0;
}
