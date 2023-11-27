#include<stdio.h>
int no_of_vowels(char*);
int main()
{
    int vowel_no=no_of_vowels("vyshnavi");
    printf("%d",vowel_no);
}
int no_of_vowels(char*s)
{
    int i,count=0;
    for(i=0;s[i]!='\0';i++)
    {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
        count++;
    }
    }
    return count;
}
