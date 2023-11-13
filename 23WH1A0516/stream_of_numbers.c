#include<stdio.h>
int main(){
int num,i=1;
do{
printf("enter number :");
scanf("%d",&num);
	if(num==999){
	printf("stop!");
	break;
	}
	else if(num>0){
	printf("the square of %d is %d",num,num*num);
	}	
	else if(num<0){
	continue;
	}
	i++;
printf("\n");
}while(i>0);
return 0;
}



