/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int num,i,count;
    printf("enter a number:  ");
    scanf("%d",&num);
    for(i=1;i<num/2;i++)
    {
      if(num%1==0);
      {
      count++;
      }
    }
    if(count==2)
    printf("prime number");
    else printf("not prime");
    return 0;
}

