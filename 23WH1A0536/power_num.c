//to find the power of number using for loop
#include<stdio.h>
#include<math.h>
int main(){
    int base,i,exp,pow=1;
    printf("Base = ");
    scanf("%d",&base);
    printf("Exponent = ");
    scanf("%d", &exp);
    for(i=0; i<=exp; i++){
             pow= pow*base;
    }
    printf("%d^%d=%d", base,exp,pow);
    return 0;
}    
