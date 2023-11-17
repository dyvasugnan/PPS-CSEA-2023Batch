//this program is to copy the first array elements into secondary array
#include<stdio.h>
int main(){
int arr1[10],i,arr2[10];
printf("enter 10 array elemnts");
for(i=0;i<=9;i++){
  scanf("%d",&arr1[i]);
  }
for(i=0;i<=9;i++){
   arr2[i]=arr1[i];
   }
   for(i=0;i<=9;i++){
    printf("%4d",arr2[i]);
   }
return 0 ;
} 
