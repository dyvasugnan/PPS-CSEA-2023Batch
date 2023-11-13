#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    int count;
    gets(s);
    for (char i = '0'; i <= '9'; i++) {
        count = 0;
        for (int j = 0; j < strlen(s); j++) {
            
            if(s[j] == i)
                count++;
            
        }
        printf("%d ", count);
    }
    return 0;
}
