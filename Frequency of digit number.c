#include<stdio.h>
int main()
{
int num,i,count,dig,temp;
printf("enter any number: ");
scanf("%d",&num);
temp=num;
for(i=0;i<=9;i++){
     count=0;
          while(num!=0){
               dig=num%10;
               if(i==dig)
                   count++;
              num=num/10;
          }
printf("frequency of %d= %d\n",i,count);
num=temp;
}
}
