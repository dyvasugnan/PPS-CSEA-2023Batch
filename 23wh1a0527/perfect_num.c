//this is to display whether a number is pefect or not
#include<stdio.h>
int main(){
int num,i=1,sum=0;
printf("enter any number");
scanf("%d",&num);
while(i<=num){
       if(num%i==0)
       sum=sum+i;
       i++;
}
if(sum==2*num){
       printf("perfect number");
}
else{
     printf("not a perfect number");
}
return 0;  
}
