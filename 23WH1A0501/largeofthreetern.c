#include<stdio.h>
int main(){
printf("Enter three numbers: ");
int num1,num2,num3,largest;
scanf("%d%d%d",&num1,&num2,&num3);
largest=(num1>num2)?(num1>num3)?printf("%d is larger than %d and %d",num1,num2,num3):printf("%d is larger than %d and %d",num3,num1,num2):(num2>num3)?printf("%d is larger than %d and %d",num2,num1,num3):printf("%d is larger than %d and %d",num3,num1,num2);
return 0;
}
