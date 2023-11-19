#include<stdio.h>
int main(){
char word[50],dup[50];
int count=0;
printf("enter a word: ");
scanf("%s",word);
printf("the given word is :%s\n"word);
    for( int i=0;i<strlen(word);i++){
    for(int j=i+1;j<strlen(word)j++)
       if(strchr(dup,word[i]!=0)
           continue;
       if(word(i)=word(j)){
          dup[count]=word[i];
       }
    }
}
printf(%s",dup);
  }
