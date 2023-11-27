#include <stdio.h>
int ispalindrome(int n);
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int result = ispalindrome(n);
    printf("%d",result);
}
int ispalindrome(int n){
    int rev = 0,rem;
    int temp = n;
    while(n>0){
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }
    if(temp == rev){
        return 1;
    }
    else{
        return 0;
}
}
