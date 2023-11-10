#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],newstr[100];
    int pos,l1,i,j=0;
    printf("Enter a string\n");
    scanf("%s",str);
    printf("Enter the position of character to be deleted\n");
    scanf("%d",&pos);
    l1=strlen(str);
    for(i=0;i<l1;i++)
    {
        if(i==(pos-1))
        {
          continue;
        }
        newstr[j]=str[i];
        j++;
        
    }
    printf("%s",newstr);
}
