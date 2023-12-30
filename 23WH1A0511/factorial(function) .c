#include<stdio.h>
int get_factorial(int);
int main(){
    int num;
    printf("enter any a number: ");
    scanf("%d",&num);
    int factorial= get_factorial(num);
    printf("factorial of a number: %d",factorial);
    return 0;
}
int get_factorial(int x){
    int fac=1;
    for(int i=1;i<=x;i++)
        fac=fac*i;
    return fac;
}
