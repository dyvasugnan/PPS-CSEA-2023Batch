#include<stdio.h>
int main (){
printf("Enter anu of the letters between v,i,b,g,y,o,r");
char col;
scanf("%c",&col);
switch(col){
	case 'v':
		printf("Violet");
		break;
	case 'i':
		printf("Indigo");
		break;
	case 'b':
		printf("Blue");
		break;
	case 'g':
		printf("Green");
		break;
	case 'y':
		printf("Yellow");
		break;
	case 'o':
		printf("Orange");
		break;
	case 'r':
		printf("Red");
		break;
	}
return 0;
}

