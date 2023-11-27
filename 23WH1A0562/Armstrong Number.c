#include <stdio.h>
 void Armstrong()
  {
    int number,N;
    printf("Enter a number: ");
    scanf("%d",&number);
    N=number;
    int i,rem,sum=0;
    while(number!=0)
    {
        rem=number%10;
        sum=sum+rem*rem*rem;
        number=number/10;
    }
    if(sum==N)
    printf("It is a Armstrong Number");
    else
    printf("Not");
  }

int main()
{   
      Armstrong();
      printf("\nHello\n");
      Armstrong();
  
}