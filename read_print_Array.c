#include<stdio.h>    
void readArray(int[],int);
void printArray(int[],int);
int main (){
int a[5],b[5],num;
readArray(a,5);
printArray(a,5);
readArray(b,5);
printArray(b,5);
}
void readArray(int num[],int n){
     printf("enter elements of array%d",n);
      for (int i=0;i<n;i++){
           scanf("%d",&num[i]);
      }
 }     
void printArray(int num[],int n){
     printf("elements of array are");
      for(int i=0;i<n;i++){
          printf("%d",num[i]);
      }    
}