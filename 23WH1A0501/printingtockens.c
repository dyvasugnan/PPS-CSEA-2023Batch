#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char s[1000];
   gets(s);
   int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i]==' ')
            printf("\n");
        else
            printf("%c",s[i]);
    }
    return 0;
}
