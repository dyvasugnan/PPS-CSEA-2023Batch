#include <stdio.h>
int isReverseNum(int);
int main() {
     int num,rev;
    
    printf("enter a number");
    scanf("%d",&num);
    rev= isReverseNum(num);
    printf("%d",rev);
    }
    
    
    
    int isReverseNum(int num) {
    int rem,rev=0,sum=0,temp=num;
    while(num>0){
    rem=num%10;
    rev= rev*10+rem;
    num=num/10;
    
    
    
    return rev;
    
    }
    }
    
       