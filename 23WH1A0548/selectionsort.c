//this is my program on selection  sort
#include<stdio.h>
void selectionsort(int[],int);
 int n,i,a[20];
 printf("enter the range of array: ");
 scanf("%d",&n);
 printf("enter the elements: ");
 for(i=0;i<n;i++)
 scanf("%d",a[i]);
 selectionsort(a,n);
 printarray(a,n);
}
void selectionsort(int[],int n){
 for(int i=0;i<n-1;i++){
  int minindex=i;
 for(int j=i+1;j<n;j++){
  if(a[minindex]>a[j]){
   minindex=j;
   }
 }
 if(minindex!=i)
   swap(&a[i],&a[minindex]);
}
}
void swap(int*n1,int*n2){
 int temp=*n1;
 *n1=*n2;
 *n2=temp;
}
void printarray(int a[],int n){
 for(int i=0;i<n;i++){
 printf("%d",a[i]);
}

 

