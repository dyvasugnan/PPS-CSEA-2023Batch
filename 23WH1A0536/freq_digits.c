//To find frequency of digits in a number
#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int count;
    puts("Enter the number");
    gets(s);
    for (char i = '0'; i <= '9'; i++) {
        count = 0;
        for (int j = 0; j < strlen(s); j++) {
            if(s[j] == i)
                count++;
        }
        printf("%d\n ", count);
    }
    return 0;
}
