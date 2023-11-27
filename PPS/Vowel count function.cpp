#include<stdio.h>
#include<string.h>
int vowelcount(char str[]){
	int count = 0;
	for(int i = 0 ; str[i] != '\0' ; i++)
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			count++;
	return count;
}
int main(){
	printf("Enter a string : ");
	char str[30];
	gets(str);
	int count  = vowelcount(str);
	printf("%d" , count);
}