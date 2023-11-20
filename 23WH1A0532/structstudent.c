//this program is about structure within the structure
#include<stdio.h>
struct student{
	char name[30];
	int age;
	int m1,m2,m3;
	struct address{
	    int hno[10];
	    char state[20];
	    int pincode;
     }s1;
}s2;
main(){
printf("enter name");
scanf("%s",&s2.name);
printf("enter age");
scanf("%d",&s2.age);
printf("enter address");
scanf("%s, &s2.s1.state");
printf("enter pincode");
scanf("%d",&s2.s1.pincode);
printf("enter houseno:");
scanf("%d",&s2.s1.hno);
return 0;
}
