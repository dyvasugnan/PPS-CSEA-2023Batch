#include<stdio.h>
int main()
{
char str[20];
int r;
printf("Enter a number");
scanf("%s",str);
printf("Enter number of digits");
scanf("%d",&r);
int i,j,c=0;
for(i=0;i<r;i++)
{
        c=0;
        for(j=0;j<r;j++)
        {
                if(str[i]==str[j])
                {
                        c++;
                }
        }
        printf("Count frequency of %c = %d \n",str[i],c);
}
}
