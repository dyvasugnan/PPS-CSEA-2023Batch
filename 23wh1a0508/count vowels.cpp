#include<stdio.h>
int countvowels(char []);
main(){
	char str[10];
	printf("enter a string in lowercase");
	scanf("%s",str);
	int vowelno=countvowels(str);
	printf("%d",vowelno);
}
int countvowels(char str[]){
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
	count++;}
	return count;
}
