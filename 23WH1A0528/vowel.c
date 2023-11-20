//to check whether given character is vowel or consonent
#include<stdio.h>
int main(){
char ch;
printf("enter a character: ");
scanf("%c",&ch);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	printf("Given character is a vowel");
else
	printf("Given character is a consonent");
return 0;
}
