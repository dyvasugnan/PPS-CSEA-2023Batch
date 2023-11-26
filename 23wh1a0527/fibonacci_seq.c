//this is to display fibonacci sequence
#include<stdio.h>
int main(){
int i,n;
int a=0,b=1;
int c=a+b;
printf("enter the number of terms");
scanf("%d",&n);
printf("fibonacci sequence: %4d%4d",a,b);
for(i=3;i<=n;i++){
      printf("%4d",c);
         a=b;
         b=c;
         c=a+b;
}
return 0;
}
