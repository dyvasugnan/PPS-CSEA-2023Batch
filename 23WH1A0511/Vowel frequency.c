#include<stdio.h>
#include<string.h>
void main()
{
 char name[100],ch;
 int i,c=0;
 printf("Enter the String: ");
 gets(name);
 for(i=0;i<strlen(name);i++){
  if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'){
      c++;
 }
 }
  if(c!=0)
      printf("vowel frequency = %d",c);
  else
      printf("invalid output");
 }
