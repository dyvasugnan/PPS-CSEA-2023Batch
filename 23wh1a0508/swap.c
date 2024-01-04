#include<stdio.h>
int main(){
int swappednum,num,fd,ld,temp,numofdigits;
printf("enter any number");
scanf("%d",&num);
numofdigits=snprintf(NULL,0,"%d",num);
ld=num%10;
fd=num/ pow(10,numofdigits-10);
temp=fd;
fd=ld;
ld=temp;
swappednum= ld* pow(10,numofdigits-1)+num%((int)pow(10,numofdigits-1));
printf("%d\n",swappednum);
return 0;
}
