//to display different star patterns
//1
#include<stdio.h>
int main(){
int row,col;
printf("enter values of row and col");
scanf("%d%d",&row,&col);
//for(int i=1; i<=row; i++){
//	for(int j=1; j<=i; j++){
//		printf("*");
//	}
//	printf("\n");
//}

//2
//for(int i=1; i<=row; i++){
//	for(int j=1; j<=col; j++){
//		if(i==1||i==row||j==1||j==col)
//			printf("* ");
//		else
//			printf("  ");
//	}
//	printf("\n");
// }

//3
for(int i=1; i<=row; i++){
	for(int j=1; j<=row-i; j++){	
		printf("  ");
	}
	for(int k=1; k<=i; k++){
		printf("* ");
	}
	printf("\n");
}

return 0;
}
