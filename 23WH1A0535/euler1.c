#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() 
{  
  int i, sum = 0, sum1 = 0;
  for(i=1;i<1000;i++)
  {
      if(i%3==0 || i%5==0)
      {
         sum = sum+i;
      }
  }
  printf("%d\n", sum);
    
    return 0;
}
