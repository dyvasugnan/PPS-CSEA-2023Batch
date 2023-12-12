//this is my insertion sort program
#include<stdio.h>
void insertionsort(int[],int);
int main(){
int i,n;
printf("enter the number: ");
scanf("%d",&n);
int a[n];
printf("enter the elements: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
insertionsort(a,n);
printarray(a,n);

}
void insertionsort(int a[],int n){
 int step,j;
 for(step=1;step<n;step++){
  int key=a[step];
  j=step-1;
 while(key<a[j] && j>=0){
  a[j+1]=a[j];
  j--;
  }
 a[j+1]=key;
 }
}
void printarray(int a[],int n){
for(int i=0;i<n;i++)
printf("%4d",a[i]);
}
