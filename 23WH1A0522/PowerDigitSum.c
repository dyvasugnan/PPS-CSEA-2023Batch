//power digit sum
#include<stdio.h>
#include<math.h>
void main(){
    int base,exp,sum=0,dig;
    printf("enter the base and exponent: ");
    scanf("%d%d",&base,&exp);
    int res=pow(base,exp);
    printf("%d ^ %d =%d\n",base,exp,res);
    while(res!=0){
        dig=res%10;
        sum=sum+dig;
        res=res/10;
    }
    printf("sum of digits in result: %d",sum);
}
