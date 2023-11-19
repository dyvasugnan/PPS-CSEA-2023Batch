#include<stdio.h>
int main()
{
    int pos,i;
    scanf("%d",&pos);
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    for(i=0;i<pos;i++)
    {
        arr[7+i]=arr[i];
    }
    for(i=0;i<7;i++)
    {
        arr[i]=arr[pos+i];
    }
    for(i=0;i<10;i++)
    {
       printf("%d\n",arr[i]);
    }
}
