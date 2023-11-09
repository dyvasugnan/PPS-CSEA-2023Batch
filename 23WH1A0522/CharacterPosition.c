#include <stdio.h>
#include <string.h>
int main() {
    char name[100],ch;
    int c=0;
    printf("enter the string: ");
    gets(name);
    printf("enter the character to search: ");
    scanf("%c",&ch);
    for(int i=0;i<strlen(name);i++){
        if(name[i]==ch){
            printf("%2d",i+1);
            c++;
        }
    }
    if(c==0){
        printf("character not found.");
    }
    return 0;
}
