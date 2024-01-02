#include <stdio.h>
int numof_vowels(char[]);
int main() {
    char string[10];
    int count;
    printf("enter string");
    
    scanf("%s",string);
    count=numof_vowels(string);
    printf(" count=%d",count);
    }
    int numof_vowels(char string[]){
    
    int count=0;
    for( int i=0;i<10;i++)
    if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
    count ++;
    return count;
    }
    }