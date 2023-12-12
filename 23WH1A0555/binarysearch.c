// this is a c program for Binary search
#include<stdio.h>
#include<stdbool.h>
bool binarysearch(int[],int,int,int);
int main(){
int n,result;
scanf("%d",&n);
int a[n],key,i;
for(i=0;i<n;i++)
{	
scanf("%d",&a[i]);
}
scanf("%d",&key);
result = binarysearch(a,key,0,n-1);
if (result==1)
printf("found");
else
printf("not found");
}
bool binarysearch(int a[],int key,int l,int h){
int mid;
while(l<=h){
mid=l+h/2;
if(key==a[mid])
return 1;
if(key>a[mid])
l=mid+1;
else
h=mid-1;
}
return 0;
}




