//this is to display fizz buzz
#include<stdio.h>
int main(){
int i;
for(i=1;i<=20;i++){
   if(i%3==0 && i%5==0)
     printf("fizz buzz\n");
    else if(i%5==0)
        printf("buzz\n");  
    else if(i%3==0) 
        printf("fizz\n");
    else 
        printf("%d\n",i);
}
return 0;
}
