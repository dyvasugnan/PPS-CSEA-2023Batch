#include<stdio.h>
int main(){
    int num,sum=0,n;
    printf("enter any number(sum of individual digits): ");
    scanf("%d",&num);
    while(num>0){
        n=num%10;
        sum=sum+n;
        num=num/10;
    }
    printf("sum of individual digits of number is: %d",sum);
    return 0;
}
