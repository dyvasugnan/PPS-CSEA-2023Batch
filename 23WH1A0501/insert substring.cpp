#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
	char a[10];
	char b[10];
	char c[10];
	int p=0,r=0,i=0;
	int t=0;

	puts("Enter First String:");
	gets(a);
	puts("Enter Second String:");
	gets(b);
	printf("Enter the position where the item has to be inserted: ");
	scanf("%d",&p);
	r = strlen(a);
	int n = strlen(b);
	i=0;
 
 // Copying the input string into another array
	while(i <= r)
	{
		c[i]=a[i];
		i++;
	}	
	int s = n+r;
	int o = p+n;
 
 // Adding the sub-string
	for(i=p;i<s;i++)
	{
		int x = c[i];
		if(t<n)
		{
			a[i] = b[t];
			t=t+1;
		}
		a[o]=x;
		o=o+1;
	}
 
	printf("%s", a);
	getch();
}
