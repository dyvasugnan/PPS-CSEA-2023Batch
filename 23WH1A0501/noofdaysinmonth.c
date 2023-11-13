#include<stdio.h>
int main(){
	int monthno;
	printf("Enter a number in range 1-12: ");
	scanf("%d",&monthno);
	switch(monthno){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("There are 31 days in this month");
			break;
		case 2:
			printf("29 Days");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 Days");
			break;
		default:
			printf("Number out of range");
			break;

}
	return 0;
}
