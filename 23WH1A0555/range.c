#include<stdio.h>
int main()
{
int l,r,count=0,count_coprime=0;
printf("enter l and r");
scanf("%d %d",&l,&r);
for(int i=1;i<=r;i++){
	if(l%i==0){
		count++;
		l+=2;			
}
if(count==1){
	count_coprime++;}

}
printf("%d",count_coprime);
}

