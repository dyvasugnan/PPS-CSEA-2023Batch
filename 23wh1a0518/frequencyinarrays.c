#include <stdio.h>
int main() {
int freq=0,a[100],range,i,num;
printf("enter the range:");
scanf("%d",&range);
printf("enter %d numbers:",range);
for(i=0;i<range;i++)
        scanf("%d",&a[i]);
printf("enter another number:");
scanf("%d",&num);
printf("the frequency of the number %d in the given data set is:",num);
for(i=0;i<range;i++)
        if(a[i]==num)
               freq++;
printf("%d",freq);
return 0;
}
