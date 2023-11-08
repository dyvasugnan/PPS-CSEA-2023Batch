#include <stdio.h>
void main(){
    int num,sum=0;
    printf("enter the range of finonacci numbers: ");
    scanf("%d",&num);
    int n1=0,n2=1,next;
    next=n1+n2;
    for(int i=3;i<=num;i++){
        n1=n2;
        n2=next;
        next=n1+n2;
        if(next%2==0){
            sum=sum+next;
        }
    }
    printf("sum of even fibinacci series: %d",sum);
}
