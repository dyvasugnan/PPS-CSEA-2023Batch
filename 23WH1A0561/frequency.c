#include<stdio.h>
int main(){
int n,digit,count;
int frequency[10]={0};
printf("enter a number");
scanf("%d",&n);
while(n!=0){
digit = n%10;
frequency[digit]++;
n=n/10;
}
printf("frequency of each digit:");
for (digit =0;digit<10;digit++){
if (frequency[digit]>0){
printf("digit %d : %d times\n",digit,frequency[digit]);
}
}
return 0;
}


