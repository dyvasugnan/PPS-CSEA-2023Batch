//binary search
#include<stdio.h>
#include<stdbool.h>

void swap(int *,int *);
void selectionSort(int[] );
bool binarySearch(int [],int,int,int);
   int n;

int main(){

   printf("enter value of n\n");
   scanf("%d",&n);
   int a[n],key,i;
   bool result;
   printf("enter %d elements\n",n) ;
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   printf("enter key value\n");
   scanf("%d",&key);
   result=binarySearch(a,key,0,n-1);
   if (result==1)
       printf("element is found\n");
   else
      printf("element is not found\n");
return 0;
}

bool binarySearch(int a[],int key,int low,int high){
     int mid;
     selectionSort(a);
     while(low<=high){
          mid=(low+high)/2;
          if(a[mid]==key)
                 return 1;
          if(a[mid]<key)
               low=mid+1;
          else
             high=mid-1;
     }
 return 0;
}

void selectionSort(int a[])
{
        for(int i=0;i<n-1;i++)
        {
            int minIndex=i;
            for(int j=i+1;j<n;j++)
            {
                if(a[minIndex]>a[j])
                {
                    minIndex=j;
                }
            }
            if (minIndex != i)
            {
                swap(&a[i],&a[minIndex]);
            }
        }   
}


void swap(int *n1,int *n2)
{
        int temp;
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
}
