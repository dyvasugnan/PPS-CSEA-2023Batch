//power of a number
#include<stdio.h>
void main(){
    int base,exp,res=1;
    printf("enter the base and exponent value: ");
    scanf("%d%d",&base,&exp);
    for(int i=0;i<exp;i++){
        res=res*base;
    }
    printf("%d^%d = %d",base,exp,res);
}
