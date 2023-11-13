#include<stdio.h>
int main(){
char a,b;
printf("Enter two single characters: ");
scanf("%c%c",&a,&b);
printf("Before swapping, the values of a and b are %c and %c respectively",a,b);
char temp=a;
a=b;
b=temp;
printf("\nAfter swapping, the values of a and b are %c and %c respectively",a,b);
return 0;
}
