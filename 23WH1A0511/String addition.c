#include<stdio.h>
#include<string.h>
int main(){
    char str[20],substr[20];
    int position,i;
    printf("enter any word: ");
    scanf("%s",str);
    printf("enter the word to be added(substring): ");
    scanf("%s",substr);
    printf("enter the position at which the '%s' should be added to '%s': ",substr,str);
    scanf("%d",&position);
    for(int i=strlen(str)-1;i>=position-1;i--){
        str[i+strlen(substr)]=str[i];
    }
    for(int j=0,i=position-1;j<strlen(substr);j++,i++){
        str[i]=substr[j];
    }
    printf("%s",str);
    
    return 0;
}
