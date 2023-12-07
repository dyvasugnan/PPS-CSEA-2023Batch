#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool is_palindrome(char[]);
int main(){
    char str[30];
    printf("enter a word: ");
    scanf("%s",str);
    bool palindrome = is_palindrome(str);
    printf("%d",palindrome);
    return 0;
}
bool is_palindrome(char x[]){
    int count=0,len=strlen(x);
    for(int i=0;i<len/2;i++){
        if(x[i]==x[len-1-i])
            count++;
    }
    if(count==len/2)
        return true;
    else
        return false;
}
