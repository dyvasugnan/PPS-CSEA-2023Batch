//Sorting elements in array using Bubble sort
#include<stdio.h>
void swap(int* , int*);
void bubbleSort(int [] , int);
void printArray(int [] , int);
int main ()
{
int n;
printf("Enter the number of elements : ");
scanf("%d",&n);
int a[n];
for(int i = 0 ; i<n ; i++)
{
        scanf("%d", &a[i]);
}
        printArray(a,n);
        printf("\n");
        bubbleSort(a,n);
        printArray(a,n);
}

void swap(int*n1 , int*n2)
{
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp;
}


void bubbleSort(int a[] , int n)
{
        for(int i = 0 ; i < n-1 ; i++)
        {
                for(int j = 0 ; j < n-i-1 ; j++)
                {
                        if(a[j] > a[j+1])
                        {
                                swap(&a[j] ,&a[j+1]);
                        }
                }
        }
}



void printArray(int a[] , int range)
{
        for (int i = 0 ; i < range ; i++)
        {
                printf("%2d\n",a[i]);
        }
}
