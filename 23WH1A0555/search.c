#include<stdio.h>
void main()
{
int a[5],n,i,search,temp;
printf("enter no.of elements");
scanf("%d",&n);
printf("the elements are");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements of search");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(a[i]==search)
{
temp=1;
}
if(temp==1)
{
printf("element found");
}
else
{
printf("element not found");
}
}
}

