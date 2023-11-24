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
  for(i=1;i<10;i++)
  {
      if(i%3==0 || i%5==0)
      {
         sum = sum+i;
      }
  }
  printf("%d\n", sum);
      for(i=1;i<100;i++)
  {
      if(i%3==0 || i%5==0)
      {
         sum1 = sum1+i;
      }
  }
  printf("%d", sum1);
    
    return 0;
}
