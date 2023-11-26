//vowel check
#include<stdio.h>
int main()
{
	char alph;
	scanf("%c",&alph);
	if(alph=='a'||alph=='i'||alph=='o'||alph=='e'||alph=='u'||alph=='A'||alph=='E'||alph=='I'||alph=='O'||alph=='U')
		printf("Vowel");
	else
		printf("consonant");
}
