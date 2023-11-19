#include<stdio.h>
int main()
{
int numbers[20],size,i;
printf("enter the number to be entered: ");
scanf("%d",&size);
printf("enter the number: ");
for(i=0;i<size;i++){
      scanf("%d",&numbers[i]);
}
for(i=(size-1);i>=0;i--){
printf("%d",&numbers[i]);
}
}
