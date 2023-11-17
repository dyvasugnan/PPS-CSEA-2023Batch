//assignment problem
#include<stdio.h>
int main(){
int month;
printf("Enter month");
scanf("%d",&month);
switch(month){
	case 1:
		    printf("no of days 31");
		    break;
    case 2:
    	    printf("no of days 28");
		    break;
    case 3: 
	        printf("no of days 31");
		    break;
    case 4: 
	        printf("no of days 30 days");
			break; 
    case 5:
		    printf("no of days 31");
		    break;
    case 6:
    	    printf("no of days 30");
		    break;
	case 7:
	  	    printf("no of days 31");
		    break;
    case 8: 
	        printf("no of days 31");
		    break;
    case 9: 
            printf("no of days 30");
            break;
    case 10:
		    printf("no of days 31");
		    break;
    case 11:
    	    printf("no of days 30");
		    break;
    case 12: 
	        printf("no of days 31");
		    break;

}
return 0;
}

