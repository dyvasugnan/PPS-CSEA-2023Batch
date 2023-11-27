#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool isPalindrome(char*);
int main()
{
    bool result=isPalindrome("aba");
printf("%d",result);    
}
bool isPalindrome(char*str){
    int l=0;
    int s=strlen(str)-1;
    while(s>1){
        if(str[l++]!=str[s--])
        {
            return 0;
        }
        else
        return 1;
    }
}
