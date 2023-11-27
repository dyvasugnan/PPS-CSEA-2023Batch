#include<stdio.h>
int reverse_no(int);
int main()
{
    int result=reverse_no(125);
    printf("%d",result);
}
int reverse_no(int a){
    int reverse;
    while(a!=0){
        int remainder=a%10;
 reverse=reverse*10+remainder;
        a=a/10;
    }
    return reverse;
}
