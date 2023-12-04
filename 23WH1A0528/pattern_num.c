//to display a pattern of numbers
#include<stdio.h>
int main() {
for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
                printf("%4d",i);
        }
                printf("\n");
        }


for(int i=1; i<=3; i++){
	for(int j=1; j<=3; j++){
		printf("%4d",j);
	}
		printf("\n");
	}


int row,col;
printf("enter values for row and col");
scanf("%d%d",&row,&col);
for(int i=1; i<=row; i++){
	for(int j=1; j<=i; j++){
		printf("%4d",j);
	}
	printf("\n");
}


for(int i=1; i<=row; i++){
	for(int j=1; j<=i; j++){
		printf("%4d",i);
	}
	printf("\n");
}
return 0;
}
