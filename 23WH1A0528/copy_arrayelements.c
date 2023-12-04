//to copy elements of one array to another array
#include<stdio.h>
int main(){
  int a[100],b[100];
  int range;
  printf("enter the range: ");
  scanf("%d",&range);
  printf("enter elements into the array: ");
  for(int i=0; i<range; i++){
      scanf("%d",&a[i]);
    }
    printf("elements of the second array are: ");
 for(int i=0; i<range; i++){
      b[i]=a[i];
      printf("%d ",b[i]);
    }
return 0;
}
