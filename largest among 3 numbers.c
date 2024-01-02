#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter three values n1,n2,n3");
    scanf("%d%d%d",&n1,&n2,&n3);
    if (n1>n2){
      if(n1>n3){
               printf("n1");
        }else{
               printf("n2");
               }
        }else{ if(n2>n3){
        printf("n2");
        }
        else
        printf("n3");
        }       
               
   return 0;
    }
    