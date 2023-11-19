#include <stdio.h>
#include<stdio.h>
int main() {
        int num,dig1,diglast,count=0;
        printf("enter a number:");
        scanf("%d",&num);
        diglast=num%10;
        int n=num,num1=num;
        for(int i=0;num !=0; i++){
                dig1=num%10;
                count++;
                num/10;
        }
        n=n-diglast+dig1;
        n=n-(dig1-diglast)*pow(10,count-1);
        printf("%d",n);
return 0;
}
