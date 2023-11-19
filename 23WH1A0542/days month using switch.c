#include<stdio.h>
int main()
{
	int month;
	printf("enter month:\n");
	scanf("%d",&month);
	printf("input month number=%d\n",month);
	switch(month){
		case 1:
		 printf("total no of days=31");
		  break;
		case 2:
		 printf("total no of days=29");
		  break;
		case 3:
		 printf("total no of days=31");
		  break;
		case 4:
		 printf("total no of days=30");
		  break;
		case 5:
		 printf("total no of days=31");
		  break;
		case 6:
		 printf("total no of days=30");
		  break;
		case 7:
		 printf("total no of days=31");
		  break;
		case 8:
		 printf("total no of days=31");
		  break;
		case 9: 
		printf("total no of days=30");
		 break;
		case 10:
		 printf("total no of days=31");
		  break;
		case 11: 
		printf("total no of days=30"); 
		break;
		case 12: 
		printf("total no of days=31");
		 break;
		default: 
		printf("out of limit");   
		}
	printf("\nout of switch");
	return 0;
}
