#include <stdio.h>  
int linearSearch(int[],int,int);
int main(){
int n;
printf("enter n value");
scanf("%d",&n);
int a[n],keyvalue,result;
printf("enter key value");
scanf("%d",&keyvalue);
printf("enter elements of array");
       for(int i=0;i<n;i++){
           scanf("%d",&a[i]);
           }
  result=linearSearch(a,n,keyvalue);
  if(result==1)
     printf("element found");
   else
      printf("element not found");
      }
int linearSearch(int  a[],int n,int keyvalue){
for(int i=0;i<n;i++){
    if(a[i] == keyvalue)  
        return 1;
    }
        return 0;    
}

