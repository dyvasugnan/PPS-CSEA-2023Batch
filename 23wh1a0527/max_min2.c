#include<stdio.h>
int main(){
int num1,num2,num3;
printf("enter any 3 numbers");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2){
     if(num1>num3){
           if(num2>num3)
                printf("%d is max,%d is min",num1,num3);
           else if(num3>num2)
                printf("%d is max,%d is min",num1,num2);
                  }
else
   printf("%d is max,%d is min",num3,num2);
}
else if(num2>num1){
        if(num2>num3){
           if(num1>num3)
               printf("%d is max,%d is min",num2,num3);
           else if(num3>num1)
               printf("%d is max,%d is min",num2,num1);
         }
else
     printf("%d is max,%d is min",num3,num1);
}
return 0;
}
