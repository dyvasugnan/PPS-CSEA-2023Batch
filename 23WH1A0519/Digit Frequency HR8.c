#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i; 
    char s[1000];
     int frequency[10]={0};
     scanf("%s",s); 
     for(i=0;i<strlen(s);i++)
     {
         if(s[i]>='0' && s[i]<='9')
         {
             frequency[s[i]-'0']++;        
             }
     }
     for(i=0;i<10;i++){
         printf("%d\t",frequency[i]);
     }
    return 0;
}
