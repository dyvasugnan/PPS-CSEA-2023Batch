#include<stdio.h>
int main(){
int months,days;
printf("enter no.of months:");
scanf("%d",&months);
switch(months){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("no.of days=31");
 		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("no.of days=30");
		break;
	case 2:
		printf("no.of days=28");
		break;
	default:
		printf("invalid months");
	}
return 0;
}
