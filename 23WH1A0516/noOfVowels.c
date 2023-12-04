#include<stdio.h>
#include<string.h>
int noOfVowels();
int main(){
	int count = noOfVowels();
	printf("there are %d vowels in the given string",count);
}
int noOfVowels(){
	char str[30],count=0;
	printf("Enter a string : ");
	scanf("%s",str);
	int len = strlen(str);
	for(int i = 0;i<len;i++){
	    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){		count++;
		}
	}
	return count;
}  
