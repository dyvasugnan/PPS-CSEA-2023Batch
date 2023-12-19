#include<stdio.h>
#include<math.h>
int x, n, sum = 0;

int Series();

int main()
{
        printf("Enter the value of x and power");
        scanf("%d%d", &x,&n);
        int result = Series();
        printf("%d",result);
}

int Series()
{
        for(int i = 0; i <=n; i++)
        {
                sum += pow(x,i);
        }
        return sum;
}
