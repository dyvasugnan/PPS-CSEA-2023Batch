#include <stdio.h>
#include<stdbool.h>
bool binary_search (int a[], int key, int l, int r)
{

  int mid;
  while (l <= r)
    {

      mid = (l + r )/ 2;
      if (a[mid] == key)
           	return 1;
      if (key > a[mid])
	{
	  l = mid + 1;
	}
      else
	r = mid - 1;

    }
  return 0;


}

int main ()
{
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
 
 int key,i;
 bool result;
 printf("enter array elements");
 for(i=0;i<n;i++){
     scanf("%d",&a[i]);
 }
 printf("Enter key value");
 scanf("%d",&key);
 
   result = binary_search (a, key, 0, n-1);
  if (result == 1)
    printf ("found");
  else
    printf ("not found");
  return 0;
}


