//alphabet is vowel or not
#include<stdio.h>
int main (){
char ch;
printf("enter a character");
scanf("%c",&ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
  printf("vowel");
}
else{
  printf("not vowel");
}
return 0;
}
