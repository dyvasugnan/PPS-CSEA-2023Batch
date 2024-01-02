#include<stdio.h>
int LinearSearch(int [],int,int);
int main()
{
  int size;
  printf("Enter the array size: ");
  scanf("%d",&size);
  int arr[size],i;
  printf("Enter the array elements:\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("The array elements are:\n");
  for(i=0;i<size;i++)
   {
     printf("%d  ",arr[i]);
   }
  int key;
  printf("\nEnter the element,you want to search for: ");
  scanf("%d",&key);
  int result=LinearSearch(arr,size,key);
  if(result == -1)
  printf("\nThe element is not found in the array");
  else
  printf("\nThe element is found at the index %d ",result);
}
 int LinearSearch(int arr[],int size,int key)
 {
   int i,flag=0;
   for(i=0;i<size;i++)
   {
     if(arr[i] == key)
      {
        flag=1;
         break;
      }
     else
       flag=0;
   }
  if(flag == 1)
  return i;
  else
  return -1;
 }
 
  
