#include<stdio.h>
#include<math.h>
int main(){
	printf("Enter a number: ");
	int num,i,root;
	char factor='a';
	scanf("%d",&num);
	root=sqrt(num);
	if(num==0||num==1){
		factor='a';
	}
	else if(num==2||num==3){
		factor='b';
	}
	else{
		for(i=2;i<=root;i++){
			if(num%i==0){
				factor='a';
				break;
			}
			else{
				factor='b';
		}
	}
}
	if(factor=='b'){
		printf("The given number, %d, is prime",num);
	}
	else{
		printf("The given number, %d, is not prime",num);
	}

	return 0;
}

