#include <stdio.h>
int vowelcount();
int main(){
    int result = vowelcount();
        printf("%d",result);
}
int vowelcount(){
    int count = 0,i;
    char ch[20];
    printf("enter the string");
    scanf("%s",ch[i]);
    for(i=0;i<20;i++){
        if(ch[i] == 'a'|| ch[i] == 'e'|| ch[i] == 'i'|| ch[i] =='0'|| ch[i] == 'u')
        {
            count++;
        }
    }
    return count;
}
    
