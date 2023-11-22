//this is to display the max and min from 3 numbers
#include<stdio.h>
int main(){
int num1,num2,num3;
printf("enter any three numbers");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2){
    if(num1>num3)
         printf("%d is max\n",num1);
    else
         printf("%d is max\n",num3);
     }
else if(num2>num1){
         if(num2>num3)
             printf("%d is max\n",num2);
         else
             printf("%d is max\n",num3);
       }
if(num1<num2){
      if(num1<num3)
           printf("%d is min\n",num1);
      else
           printf("%d is min\n",num3);
      }
else if(num2<num3){
          if(num2<num3)
               printf("%d is min\n",num2);
          else
               printf("%d is min\n",num3);
     }
return 0;
}
