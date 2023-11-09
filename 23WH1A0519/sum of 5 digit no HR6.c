#include <stdio.h>

int main()
{
  int num,sum=0,temp=num;
  scanf("%d",&num);
  while(num>0)
  {
      temp=num%10;
      sum=sum+temp;
      num=num/10;
  }
  printf("%d",sum);
}
