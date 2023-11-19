#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ 
    long dob;
   
   scanf("%ld",&dob);
    long sum = 0,num,temp;
  
    num = dob;
    if(dob > 9){
    do
    {
       sum =0;
        while(num > 0)
        {
            
            temp  = num % 10 ;
            sum  = sum + temp;
            num = num /10;
        }
        num = sum;
        
        
    }
    while(sum > 9);
    
    printf("%ld",sum);}
    else
    printf("%ld",dob);
    return 0;
}

