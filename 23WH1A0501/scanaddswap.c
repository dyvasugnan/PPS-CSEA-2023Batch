#include<stdio.h>
int main(){
int a,b;
printf("Enter two values: ");
scanf("%d%d",&a,&b);
printf("Before swapping, the values of a and b are %d and %d respectively",a,b);a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping, the values of a and b are %d and %d respectively",a,b);
return 0;
}
