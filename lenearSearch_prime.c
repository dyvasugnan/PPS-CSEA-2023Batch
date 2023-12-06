#include <stdio.h>  
int linearSearch(int[],int,int);
int isPrime(int);
int main(){
int n;
printf("enter n value");
scanf("%d",&n);
int a[n],result;
printf("enter elements of array");
       for(int i=0;i<n;i++){
           scanf("%d",&a[i]);
           }
           int num;
   printf("enter value of num");
   scanf("%d",&num);
  result=linearSearch(a,n,num);
  if(result==1)
     printf("element found");
   else
      printf("element not found");
      }
   int isPrime(int num ){
   int count=0;
   printf("enter value of num");
   scanf("%d",&num);
   for(int i=1;i<num;i++){
       if(num%i==0){
       count++;
       }
       return (count==2);
         
      }
      }
      
int linearSearch(int  a[],int n,int primenumber){
    
for(int i=0;i<n;i++){
    if(a[i] == primenumber)  
        return 1;
    }
        return 0;    
}

    