//this is to find out number of days present in a month
#include<stdio.h>
int main(){
int month_number;
printf("input month number: ");
scanf("%d",&month_number);
switch(month_number){
	case 1:
		printf("total number of days = 31");
		break;
	case 2:
		printf("total number of days = 28");
		break;
	case 3:
		printf("total number of days = 31");
		break;
	case 4:
		printf("total number of days = 30");
		break;
	case 5:
		printf("total number of days = 31");
		break;
	case 6:
		printf("total number of days = 30");
		break;
	case 7:
		printf("total number of days = 31");
		break;
	case 8:
		printf("total number of days = 31");
		break;
	case 9:
		printf("total number of days = 30");
		break;
	case 10:
		printf("total number of days = 31");
		break;
	case 11:
		printf("total number of days = 30");
		break;
	case 12:
		printf("total number of days = 31");
		break;
	default:
		printf("entered number is wrong");
	}
//printf("end of switch");
return 0;
}
