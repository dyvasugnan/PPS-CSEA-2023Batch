#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
    char s[10];
    char sen[10],sen1[14],sen2[15];
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s%s%s%s",s,sen,sen1,sen2);
    printf("%s\n%s %s %s",s,sen,sen1,sen2);
    return 0;
}
