#include<stdio.h>
int main(){
           int num,num1,rem,sum=0;
           printf("give a num");
           scanf("%d",&num);
           num1=num;
           while(num1>0){
                          rem=num1%10;
                          sum=sum+rem*rem*rem;
                          num1=num1/10;
                         }
             if(sum==num)
                       printf("given n.o is armstrong number");
             else
                       printf("given n.o is not an armstrong number");
        return 0;
    }

