#include<stdio.h>
int main()
{

int principle;
float rate,time,simple_interest;


printf("enter amount:");
scanf("%d",&principle);

printf("enter rate:\n");
scanf("%f",&rate);

printf("enter time:\n");
scanf("%f",&time);

simple_interest=(principle*rate*time)/100;

printf("the S.I is: %0.2f",simple_interest);










}
















