#include<stdio.h>
struct student{
	char name[30];
	int age;
	int roll_no;
	int m1,m2,m3;
	struct address{
		int hno;
		int pincode;
		char colony[30];
	}a;
	
}s;
int main(){
	printf("enter name");
	scanf("%s",s.name);
	printf("enter age:");
	scanf("%d",&s.age);
	printf("enter 3 subject marks :");
	scanf("%d %d %d",&s.m1,&s.m2,&s.m3);
	printf("enter roll no:");
	scanf("%d",&s.roll_no);
	printf("enter hno :");
	scanf("%d",&s.a.hno);
	printf("enter colony:");
	scanf("%s",s.a.colony);
	printf("enter pincode :");
	scanf("%d",&s.a.pincode);
	return 0;
	}
	
