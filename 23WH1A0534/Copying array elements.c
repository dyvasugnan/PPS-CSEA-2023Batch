#include<stdio.h>
int main()
{
    int arr[100],arr1[100];
    int r,i;
    printf("Enter range of array");
    scanf("%d",&r);
    printf("Enter elements of array")
    for(i=0;i<r;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<r;i++)
    {
        arr1[i]=arr[i];
    }
    printf("Array 1= ");
    for(i=0;i<r;i++)
    {
        printf("%2d ",arr[i]);
    }
    printf("Array 2= ");
    for(i=0;i<r;i++)
    {
        printf("%2d ",arr1[i]);
    }
}
    
    
