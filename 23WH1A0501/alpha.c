#include<stdio.h>
int main(){
	printf("Enter a character: ");
	char var;
	scanf("%c",&var);
	if(var=='a'||var=='b'||var=='c'||var=='d'||var=='e'||var=='f'||var=='g'||var=='h'||var=='i'||var=='j'||var=='k'||var=='l'||var=='m'||var=='n'||var=='o'||var=='p'||var=='q'||var=='r'||var=='s'||var=='t'||var=='u'||var=='v'||var=='w'||var=='x'||var=='y'||var=='z'){
		printf("%c is an alphabet",var);
	}
	else{
		printf("%c is not an alphabet",var);
}
return 0;
}
