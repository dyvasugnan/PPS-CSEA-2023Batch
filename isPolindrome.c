#include <stdio.h>
int isPolindrome(int);
int main() {
     int num,rev;
    
    printf("enter a number");
    scanf("%d",&num);
    rev= isPolindrome(num);
    if (rev==1){
    printf("polindrome");
    }
    else {
    printf("not a polindrome");
    }
    }
    int isPolindrome(int num) {
    int rem,rev=0,temp=num;
    while(num>0){
    rem=num%10;
    rev= rev*10+rem;
    num=num/10;
    }
    if(temp==rev){
    return 1;
    }
    else {
    return 0;
    }
    }
    
       