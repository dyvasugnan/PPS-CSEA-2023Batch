   #include<stdio.h>
int main(){
	int num,i;
	printf("enter number :");
	scanf("%d",&num);
	int temp=num,count,rem;
	for(i=0;i<=9;i++){
		count=0;
		while(num>0){
			rem=num%10;
			if(rem==i){
				count++;
			}
			num=num/10;
		}
		printf("frequency of the %d = %d\n",i,count);
		num=temp;
	}
	return 0;
}
