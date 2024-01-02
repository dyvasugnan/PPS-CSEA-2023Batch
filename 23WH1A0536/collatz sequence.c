//collatz sequence
#include<stdio.h>
void collatzSeq(int);
int main()
{
        collatzSeq(6);
}

void collatzSeq(int s)
{
 while (s != 1)
   {
        if (s % 2 == 0)
        {
                s = s/2;
        }
        else
        {
                s = (3*s) + 1;
        }
                printf("%3d" , s);
    }
}
