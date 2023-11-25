#include <stdio.h>
int isArmstrongNum(int);
int main() {
     int num,reverse,result;
    
    printf("enter a number");
    scanf("%d",&num);
    result= isArmstrongNum(num);
    if (result==1){
    printf("Armstrong number ");
    }
    else {
    printf("not a armstrong number");
    }
    }
    int isArmstrongNum(int num) {
    int rem,rev=0,sum=0,temp=num;
    while(num>0){
    rem=num%10;
    rev= rev*10+rem;
    num=num/10;
    sum= sum+rem*rem*rem;
    }
    if(temp==sum){
    return 1;
    }
    else {
    return 0;
    }
    }
    
       