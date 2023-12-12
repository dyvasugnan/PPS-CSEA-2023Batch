#include<stdio.h>
int col_seq(int num){
while(num!=1){
if(num%2==0){
	num/=2;
	printf("%d\n",num);}
else{ 
	num=num*3+1;
	printf("%d\n",num);
}}

}
int main(){
int num,result;
scanf("%d",&num);
col_seq(num);

}



