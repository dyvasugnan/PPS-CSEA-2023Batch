#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],newstr[150],instr[50];
    int pos,i,j=0,l1,l2;
    printf("Enter string");
    gets(str);
    printf("Enter string to be inserted");
    gets(instr);
    printf("Enter position after which it is to be inserted");
    scanf("%d",&pos);
    for(i=0; i<pos; i++)
    {
        newstr[j]=str[i];
        j++;
    }
    l2=strlen(instr);
    for(i=0;i<l2;i++)
    {
        newstr[j]=instr[i];
        j++;
    }
    l1=strlen(str);
    for(i=pos;i<l1;i++)
    {
        newstr[j]=str[i];
        j++;
    }
    printf("%s",newstr);
    
}
