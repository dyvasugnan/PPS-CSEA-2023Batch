int main(){
	printf("Enter a character: ");
	char var;
	scanf("%c",&var);
	if(var=='a'||var=='b'||var=='c'||var=='d'||var=='e'||var=='f'||var=='g'||var=='h'||var=='i'||var=='j'||var=='k'||var=='l'||var=='m'||var=='n'||var=='o'||var=='p'||var=='q'||var=='r'||var=='s'||var=='t'||var=='u'||var=='v'||var=='w'||var=='x'||var=='y'||var=='z'){
		if(var=='a'||var=='e'||var=='i'||var=='o'||var=='u'){
			printf("%c is a vowel",var);
		}
		else{
			printf("%c is an alphabet but not a vowel",var);
		}
	}
	else{
		printf("%c is not an alphabet",var);
	}

	return 0;
}
