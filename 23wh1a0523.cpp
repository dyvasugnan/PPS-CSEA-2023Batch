#include<stdio.h>
int main(){
int num,sum=0;
    printf("enter the range of finonacci numbers: ");
    scanf("%d",&num);
    int n1=0;
	int n2=2;
    int next=n1+n2;
    for(int i=4;i<=num;i+=2){
        n1=n2;
        n2=next;
        next=n1+n2;
        sum=sum+next;
    }
    printf("sum of even fibinacci series: %d",sum);
}



