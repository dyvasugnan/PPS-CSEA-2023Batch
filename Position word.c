#include<stdio.h>
int main(){
char str[20],ch;
int position,i;
printf("enter any word: ");
scanf("%s",str);
printf("enter the position: ");
scanf("%d",&position);
for(int i=position-1;i<strlen(str);i++){
    str[i]=str[i+1];
}
printf("%s",str);
}
