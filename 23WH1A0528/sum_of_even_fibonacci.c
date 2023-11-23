#include <stdio.h>

int main() {
int t0=1,t1=2,next,num,sum=0;
printf("enter the number of elements: ");
scanf("%d",&num);
printf("%d %d ",t0,t1);
next = t0+t1;
sum=sum+t1;
for(;next<=num;){
    printf(" %d ",next);
    t0=t1;
    t1=next;
    next=t0+t1;
    if(next%2==0){
    sum=sum+next;
    }
}
printf("\n%d",sum);
    return 0;
}