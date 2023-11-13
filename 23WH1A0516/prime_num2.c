#include<stdio.h>
int main(){
int num,i,count,range;
printf("enter range :");
scanf("%d",&range);
for(num=1;num<=range;num++){
count=0;
for(i=1;i<=num;i++){
	if(num%i==0){
	count++;
}
}
 	if(count==2){
	printf("%d ",num);
	}
}
return 0;
}

