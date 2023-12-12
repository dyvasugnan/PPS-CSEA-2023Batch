//this is my binary search program
#include<stdio.h>
#include<stdbool.h>
bool binarySearch(int[],int,int,int);
main(){
  int n,result,key;
  printf("enter a number: ");
  scanf("%d",&n);
  printf("enter a key value: ");
  scanf("%d",&key);
  int a[n],i;
  printf("enter the elements: ");
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  result = binarySearch(a,key,0,n-1);
  if(result == 1)
   printf("%d",result);
  else{
   printf("%d",result);
}
}
bool binarySearch(int a[],int key,int low,int high){
  int mid;
  while(low<=high){
   mid=(low+high)/2;
  if(a[mid] == key)
  return 1;
   if(a[mid]<key)
    low = mid+1;
   else{
    high = mid-1;
}
 }
return 0;
}
