//alphabet or not
#include<stdio.h>
int main (){
char ch;
printf("enter a character");
scanf("%d",&ch);
if(65<ch<91||97<ch<123)
{('a'<ch<'z'||'A'<ch<'Z')
printf("given character is an alphabet");
}
else{
  printf("given character is not an alphabet");
}
return 0;
}
