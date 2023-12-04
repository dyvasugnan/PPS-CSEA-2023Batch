//to swap two characters
#include <stdio.h>
int main() {
char char1,char2;
printf("enter characters");
scanf("%c%c",&char1,&char2);
printf("before swaping:char1=%c,char2=%c",char1,char2);
int temp;
temp=char1;
char1=char2;
char2=temp;
printf("after swapimg:char1=%c,char2=%c",char1,char2);
return 0;
}
