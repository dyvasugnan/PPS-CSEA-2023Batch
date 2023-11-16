#include <stdio.h>

int main() {
int num,sum=0,temp=0;
scanf("%d",&num);
temp=num%10;
while(num>10){
    num=num/10;
    sum=sum+num+temp;
    printf("%d",sum);
}
}
