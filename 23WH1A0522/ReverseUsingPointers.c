#include<stdio.h>
void main()
{
    int i,n,a[10];
    int *p=a;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("Array elements in reverse order:\n");
    for(i=n;i>0;i--)
    {
        printf("%d ",*(p+i));
    }
}
