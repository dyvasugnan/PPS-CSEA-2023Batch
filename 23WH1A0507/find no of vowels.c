#include<stdio.h>
int countVowels(char []);
	




int main(){
	int i;
	char str[10];
	printf("Enter a string in lowercase:");
	scanf("%s",str);
int vowel_no=countVowels(str);
printf("The no of vowels in the given string is %d",vowel_no);
}

int countVowels(char str[]){
int	count=0;
int i;
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		                                                                      count++;
	}
	
	return count;
}

