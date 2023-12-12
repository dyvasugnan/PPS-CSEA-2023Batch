//selection sort
#include<stdio.h>

int n,a[100];

void printArray();
void selectionSort();
void swap(int *,int *);
void readArray();

int main(){
   printf("enter size of array\n");
   scanf("%d",&n);
   readArray();
   printf("Entered elemnts are :\n");
   printArray();
   selectionSort();
   printf("\n");
   printf("Sorted elements are :\n");
   printArray();
 }

void readArray()
{
    printf("enter %d values\n",n);
    for (int i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
}

void printArray()
{
        for(int i=0;i<n;i++)
        {
            printf("%4d",a[i]);
        }
}

void selectionSort()
{
        for(int i=0;i<n-1;i++)
        {
            int minIndex=i;
            for(int j=i+1;j<n;j++)
            {
                if(a[minIndex]>a[j])
                {
                    minIndex=j;
                }
            }
            if (minIndex != i)
            {
                swap(&a[i],&a[minIndex]);
            }
        }   
}
void swap(int *n1,int *n2)
{
        int temp;
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
}
