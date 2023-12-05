// read and print elements in the array
#include<stdio.h>
void readArray(int [] , int);
void printArray(int [] , int);
int main()
{
int a[10] , b[8] , c[9];
        readArray(a,10);
        printArray(a,10);
        printf("\n");
        readArray(b,8);
        printArray(b,8);
        printf("\n");
        readArray(c,9);
        printArray(c,9);
        printf("\n");
}


void readArray(int x[] , int n)
{
        for(int i = 0 ; i < n ; i++)
        {
                scanf("%d", &x[i]);
        }
}



void printArray(int x[] , int n)
{
        for(int i = 0 ; i < n ; i++)
        {
                printf("%d", x[i]);
        }
}
