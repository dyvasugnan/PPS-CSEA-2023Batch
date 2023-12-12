// this is linearsearch
#inlude<stdio.h>
#include<stdbool.h>
bool linearsearch(int[],int,int);
int main(){
int a[100],n,key;
scanf("%d%d",&n,&key);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
bool result=linearsearch(a,n,key);
printf("the result is %d",result);
}
bool linearsearch(int x[],int n,int key){
int i,count = 0;
for(i=0;i<n;i++){
if(key==x[i]){
count++;
break;
}
}
if(count==1)
 return true;
else
 return false;
}
