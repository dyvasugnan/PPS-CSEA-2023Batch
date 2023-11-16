//swaping of first and last digits in a number
#include<stdio.h>
int main(){
    int num,on,f,c=0,power=1;
    printf("enter any number: ");
    scanf("%d",&num);
    on=num;
    int l=num%10;
    while((num/10)!=0){
	    num=num/10;
	    c++;
    }
	f=num;
	num=on;
	for(int i=0;i<c;i++){
	    power=power*10;
	}
	num=num%power;
	num=num/10;
	printf("number after swaping first and last digit: %d%d%d",l,num,f);
	return 0;
}

