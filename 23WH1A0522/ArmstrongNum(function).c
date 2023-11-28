#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool is_armstrong(int);
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    bool armstrong_num = is_armstrong(num);
    printf("%d",armstrong_num);
    return 0;
}
bool is_armstrong(int x){
    int count=0,rem,sum=0;
    int on=x;
    while(x!=0){
        x=x/10;
        count++;
    }
    x=on;
    for(int i=0;i<count;i++){
        while(x!=0){
            rem=x%10;
            sum=sum+pow(rem,count);
            x=x/10;
        }
    }
    if(sum==on)
        return true;
    else
        return false;
}
