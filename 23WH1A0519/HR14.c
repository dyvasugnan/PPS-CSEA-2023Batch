#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int i,sum=0;
  int next_term,t1=a,t2=b,t3=c;
  if(n==1)
  next_term=t1;
  else if(n==2)
  next_term=t2;
  else if(n==3)
  next_term=t3;
  else{
      for(i=4;i<=n;i++)
      {
          next_term=t1+t2+t3;
          t1=t2;
          t2=t3;
          t3=next_term;
      }
  }
  return next_term;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
