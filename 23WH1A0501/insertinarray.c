#include<stdio.h>
int main(){
int a[100],range,position,i,num;
printf("Enter the range : ");
scanf("%d",&range);
printf("\nEnter any %d numbers: ",range);
for(i=0;i<range;i++)
	scanf("%d",&a[i]);
printf("\nEnter the position where the new number is to be inserted: ");
scanf("%d",&position);
range++;
for(i=position;i<range;i++);
	a[i+1]=a[i];
printf("Enter the new number to be inserted: ");
scanf("%d",&num);
a[position]=num;
printf("After the insertion the new data set is: ");
for(i=0;i<range;i++)
	printf("\n%d",a[i]);
return 0;
}
