//This program is to find sum of multiples of 3 or 5 below 1000
#include <stdio.h>

int main() {
    
   int sum=0;
for(int i=0;i<1000;i++){
    if(i%3==0 || i%5==0)
    sum+=i;
}
printf("%d",sum);
    return 0;
}
