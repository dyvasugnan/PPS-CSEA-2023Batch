#include<stdio.h>
void main()
{
int a[5],i,n,even=0,odd=0;
printf("enter size of array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
even++;
}
else
{
odd++;
}
}
printf("total even elements:%d",even);
printf("total odd elements:%d",odd);
}
