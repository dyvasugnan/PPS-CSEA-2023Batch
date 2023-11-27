#include<stdio.h>
void Palindrome()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int N=number;
    int rem,rev=1;
    while(number>0)
    {
        rem=number%10;
        rev=rev*10+rem;
        number=number/10;
    }
    if(N==rev)
    printf("Palindrome");
    else
    printf("Not a Palindrome");
}
void main()
{
    Palindrome();
}