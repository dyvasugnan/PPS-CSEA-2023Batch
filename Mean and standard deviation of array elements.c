#include<stdio.h>
#include<math.h>
int main()
{
    int a[100];
    int i,j,r,sum=0,mean,sum1=0,std;
    printf("Enter range array");
    scanf("%d",&r);
    printf("Enter array elements");
    for(i=0;i<r;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<r;i++)
    {
        sum+=a[i];
    }
    mean=sum/r;
    for(i=0;i<r;i++)
    {
        sum1 += (a[i]-mean)*(a[i]-mean);
    }
    std=sqrt(sum1/(r-1));
    printf("Mean=%d",mean);
    printf("Standard Deviation=%d",std);
    
}
