#include <stdio.h>
int reverse(int);
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int result = reverse(num);
    printf("%d",result);
}
int reverse(int num){
    int rev = 0,rem;
    while (num>0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    return rev;
}
