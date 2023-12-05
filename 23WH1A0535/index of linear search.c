#include <stdio.h>
void linearSearch (int[], int, int);
int main ()
{
  int a[50], len, key, i;
  printf ("Enter the range");
  scanf ("%d", &len);
  printf ("Enter the elements of array");
  for (i = 0; i < len; i++)
    {
      scanf ("%d", &a[i]);
    }
  printf ("Enter key value");
  scanf ("%d", &key);
   linearSearch (a, len, key);
  
}


void linearSearch (int a[], int len, int key)
{
  int count = 0, i;
  for (i = 0; i < len; i++)
    {
      if (a[i] == key)
	{
	  count++;
	  printf("The key is present in index %d", i);
	}
    }
	    printf("Missing key");
    
}
