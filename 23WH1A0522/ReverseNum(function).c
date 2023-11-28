#include<stdio.h>
int get_reverse(int);
int main(){
    int num;
    printf("enter any number: ");
    scanf("%d",&num);
    int reverse=get_reverse(num);
    printf("reverse of a number: %d",reverse);
    return 0;
}
int get_reverse(int x){
    int rem,rev=0;
    while(x!=0){
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    return rev;
}
