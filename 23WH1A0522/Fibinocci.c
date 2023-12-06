#include<stdio.h>
void get_fibinocci(int);
void main(){
	int n;
	printf("enter the number of terms in series: ");
	scanf("%d",&n);
	get_fibinocci(n);
}
void get_fibinocci(int x){
	int n1=0,n2=1,temp,next_term,i;
	printf("fibinocci series is \n%d %d",n1,n2);
	for(i=3;i<=x;i++){
	    next_term=n1+n2;
		n1=n2;
		n2=next_term;
		printf(" %d",next_term);
	}
}
