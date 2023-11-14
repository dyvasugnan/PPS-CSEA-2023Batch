//summation of primes
#include<stdio.h>
void main(){
    int num,i,j,sum=0;
    printf("enter any number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        int count=0;
        for(j=1;j<=i;j++){
        if(i%j==0)
            count++;
    }
    if(count==2)
            sum=sum+i;
    }
    printf("summation of prime numbers below %d = %d",num,sum);
}
