\\coprime pairs in the given range
#include <stdio.h>
int coPrime(int, int);
int main()
{
    int n1, n2, result;
    printf("Enter the lowest and highest range of your choice : ");
    scanf("%d%d",&n1,&n2);
    result = coPrime(n1,n2);
    printf("%d", result);
}

int coPrime(int n1, int n2)
{
    int count = 0;
    int range = n2 - n1;
    if(range % 2 == 0)
    {
        count = range / 2;
    
    }
    else
    {
        count = (range + 1) /2;
    }
return count; 
}
