#include<stdio.h>
int main(){
    int n,rem,fac=1,sum=0,num;
    printf("enter any number: ");
    scanf("%d",&n);
    num=n;
    while(n>0){
        rem=n%10;
        for(int i=1;i<=rem;i++){
            fac=fac*i;
        }
        sum=sum+fac;
        n=n/10;
        fac=1;
    }
    if(sum==num)
        printf("%d is a strong number.",num);
    else
        printf("%d is not a strong number.",num);
    return 0;
}
