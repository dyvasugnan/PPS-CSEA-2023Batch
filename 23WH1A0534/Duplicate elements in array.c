#include<stdio.h>
int main()
{
    int a[100];
    int i,j,n;
    printf("Enter number of elements in array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("Duplicate element is %d",a[i]);
            }
        }
    }
    
}
