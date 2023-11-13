#include<stdio.h>
int main(){
int a,b;
printf("Enter the first value: ");
scanf("%d",&a);
printf("Enter the second value: ");
scanf("%d",&b);
printf("before swapping, the values of a and b are, %d and %d respectively",a,b);
int temp=a;
a=b;
b=temp;
printf("\nAfter swapping, the values of a and b are %d and %d respectively",a,b);
return 0;
}
