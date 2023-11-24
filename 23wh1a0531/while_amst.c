//amstrong numbers using while loop
#include<stdio.h>
int main(){
int num,temp,rem,sum=0;
printf("enter any number");
scanf("%d",&num);
temp=num;
while(num>0){
rem=num%10;
sum=sum+rem*rem*rem;
printf("%4d",sum);
//num=num/10;
}
if(temp==sum){
printf("the number is an amstrong number");
}
else{
printf("the number is not an amstrong number");
}

return 0;
}
