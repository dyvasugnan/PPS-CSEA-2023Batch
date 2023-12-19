#include<stdio.h>
#include<math.h>
float x, n, sum = 1;

float Series();

int main()
{
        printf("Enter the value of x and power");
        scanf("%f%f", &x,&n);
        float result = Series();
        printf("%.4f",result);
}

float Series()
{
        for(int i = 1; i <=n; i++)
        {
                sum =sum + (pow(-x,i)) / (2*i);
        }
        return sum;
}
