//fibonacci sequence
#include<stdio.h>
int main(){
int num,t1=0,t2=1,nxt_trm;
printf("enter a number");
scanf("%d",&num);
printf("%4d%4d",t1,t2);
for(int i=1;i<num;i++){
  nxt_trm=t1+t2;
  printf("%4d",nxt_trm);
  t1=t2;
  t2=nxt_trm;
}
return 0;
}
