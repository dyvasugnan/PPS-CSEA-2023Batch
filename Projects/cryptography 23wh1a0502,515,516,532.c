// THIS PROGRAM IS ABOUT CRYPTOGRAPHY
#include<stdio.h>
#include<string.h>
void encryption(char [], int);	//FUNCTION DECLARATION FOR ENCRYPTION 
void decryption(char[], int);	//FUNCTION DECLARATION FOR DECRYPTION
int main(){
	int encryptionKey ,decryptionKey;
	char word[100];
	printf("Enter a word : ");		// STRING AS AN INPUT
	scanf("%s",word);
	printf("Enter the key for Encryption(1 TO 25) : ");	//INPUT FOR ENCRYPTION OF THE GIVEN STRING(KEY VALUE)
	scanf("%d",&encryptionKey);
	printf("ORIGINAL WORD : %s",word);
	encryption(word,encryptionKey);	//FUNCTION CALLING
	printf("\nENCRYPTED WORD : %s", word);	
	printf("\nEnter the word for Decryption : "); 	//INPUT FOR DECRYPTION OF THE STRING
	scanf("%s",word);
	printf("Enter the key for Decryption(negative value): ");	//INPUT FOR DECRYPTION OF THE GIVEN STRING(KEY VALUE)
	scanf("%d",&decryptionKey);
	decryption(word,decryptionKey);
	printf("DECRYPTED WORD : %s",word);
	return 0;		
}
void encryption(char word[100],int key){
	int i;
	for(i = 0;i < strlen(word); i++){
		if(word[i] >= 'a' && word[i] <= 'z'){
			word[i] = (word[i] - 97 + key) % 26 + 97;
		}
		else if(word[i] >= 'A' && word[i] <= 'Z'){
			word[i] = (word[i] - 65 + key) % 26 + 65;
		}
	}
}
void decryption(char word[100],int key){
	int i;
	for(i = 0;i < strlen(word); i++){
		if(word[i] >= 'a' && word[i] <= 'z'){
			word[i] = ((word[i] - 97 )+ key+ 26) % 26 + 97;
		}
		else if(word[i] >= 'A' && word[i] <= 'Z'){
			word[i] = ((word[i] - 65 )+ key + 26) % 26 + 65;
		}
	}
}
