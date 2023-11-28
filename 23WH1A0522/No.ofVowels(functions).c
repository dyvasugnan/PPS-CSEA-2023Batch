#include<stdio.h>
#include<string.h>
int count_vowels(char[]);
int main(){
    char str[30];
    printf("enter a word: ");
    scanf("%s",str);
    int vowels= count_vowels(str);
    printf("number of vowels: %d ",vowels);
    return 0;
}
int count_vowels(char x[]){
    int count=0;
    for(int i=0;i<strlen(x);i++){
    if (x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
        count++;
    }
    return count;
}
