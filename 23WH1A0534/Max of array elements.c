#include<stdio.h>
int main()
{
    int a[100];
    int i,r,max;
    printf("Enter range of array");
    scanf("%d",&r);
    printf("Enter elements in array");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<r;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("max =%d \n",max);
    
}
