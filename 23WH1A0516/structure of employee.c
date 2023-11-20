#include<stdio.h>
struct employee{
	char name[30];
	int age;
	int salary;
	char designation[30];
}s[10];
int main(){
	int i;
	for(i=0;i<3;i++){
		printf("enter name :");
		scanf("%s",s[i].name);
		printf("enter age :");
		scanf("%d",&s[i].age);
		printf("enter salary :");
		scanf("%d",&s[i].salary);
		printf("enter designation :");
		scanf("%s",s[i].designation);
		printf("%s",s[i].name);
		printf("\n");
	}
	return 0;
}
