#include<stdio.h>
int main(){
int power=1,swap;
int num,firstdigit,lastdigit,temp,digit;
printf("enter any number");
scanf("%d",&num);
temp=num;
while(num!=0){
	digit++;
	num/=10;
	}
lastdigit=temp%10;
num=temp/10;
firstdigit=temp/(10*(digit-1));
for(int i=0;i,digit-2;i++){
	power*=10;
	}
swap=lastdigit*power*10 + num%power*10+firstdigit;
printf("swap:%d",swap);
return 0;
}

