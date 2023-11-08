#include<stdio.h>
#include<string.h>
void main()
{
 char name[100],ch;
 int i,c=0;
 printf("Enter the String: ");
 gets(name);
 printf("Enter a character to find frequency:");
 scanf("%c",&ch);
 for(i=0;i<strlen(name);i++){
  if(name[i]==ch){
      c++;
  }
 }
  if(c!=0)
      printf("the frequency of the character %c is %d",ch,c);
  else
      printf("invalid output");
 }
