#include<stdio.h>    

int bubbleSort( int a[],int n){
int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
 }int bubbleSort(int[],int );
int main(){
int result,i;
int a[]={5,4,3,2,1};
int n= sizeof(a)/sizeof(a[0]);

bubbleSort(a,n);
printf(" after sorting ");
       for(i=0;i<n;i++){
           printf("%d",a[i]);
           
       }
  }