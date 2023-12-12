//this is my linear search program
#include<stdio.h>
int linearsearch(int[],int,int);
main(){
int a[50],n,i,key;
printf("enter a num: ");
scanf("%d",&n);
printf("enter key value: ");
scanf("%d",&key);
printf("enter the elements: ");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
int result = linearsearch(a,n,key);
printf("%d",result);
}
int linearsearch(int a[50],int n,int key){
 int i;
 for(i=0;i<n;i++){
  if ( a[i]==key){
   return 1;
  }
 }
return 0;
}
