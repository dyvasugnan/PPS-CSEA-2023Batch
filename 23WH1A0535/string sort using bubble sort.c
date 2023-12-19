#include<stdio.h>
#include<string.h>
char name[20][20];
int n,i,j;
void swap(char[], char[]);
int compare(char [], char []);
void readNames();
void sortNames();
void printNames();

int main()
{
        printf("Enter number of names\n");
        scanf("%d",&n);
        printf("Enter %d names\n",n);
        readNames();
        printf("Entred names are : \n");
        printNames();
        sortNames();
        printf("Sorted names are : \n");
        printNames();
}


void readNames()
{
        for(i = 0; i<n; i++)
        {
                scanf("%s",name[i]);
        }
}


void printNames()
{
        for(i = 0; i<n; i++)
        {
                printf("%s\n",name[i]);
        }
}


void sortNames()
{
        int compare1;
        for(i = 0; i<n-1; i++)
        {
                for(j = 0; j<n-i-1; j++)
                {
                        compare1 = compare(name[j],name[j+1]);
                        if (compare1>0)
                        {
                                swap(name[j],name[j+1]);
                        }
                }
        }
}


int compare(char s[], char s1[])
{
        int result;
        result = strcmp(name[j],name[j+1]);
        return result;
}


void swap(char s[], char s1[])
{
        char temp[20];
        strcpy(temp,s);
        strcpy(s,s1);
        strcpy(s1,temp);
}
