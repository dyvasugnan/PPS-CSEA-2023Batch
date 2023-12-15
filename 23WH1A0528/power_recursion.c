//to find power of a number using recursion
#include<stdio.h>
int power(int,int);
int main(){
    int exponent,base;
        printf("enter base number and exponent number: ");
        scanf("%d%d",&base,&exponent);
    int result = power(base,exponent);
        printf("%d",result);
return 0;
}
int power(int x,int n){
    if(n==1)
        return x;
return x*power(x,n-1);
}
