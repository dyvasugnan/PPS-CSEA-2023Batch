//this program is sbout structure of employee
#include<stdio.h>
struct employee	{
	char name[30];
	int age;
	int id;
	int salary;
	char designation[30];
}s1[3];
  int  main(){
   	int i;
   for(i=0;i<3;i++){
       printf("enter name of the employee");
       scanf("%s",s1[3].name);
       printf("enter age");
	   scanf("%d",&s1[3].age);
	   printf("enter id");
	   scanf("%d",&s1[3].age);
       printf("enter salary");
	   scanf("%d",&s1[3].salary);
	   printf("enter designation");
	   scanf("%s",s1[3].designation);	
       }
return 0;
}

