#include <stdio.h>
#include <math.h>
 
int main()
{
  	int Number, FirstDigit, DigitsCount, LastDigit, a, b, SwapNum;
 
  	printf("\n Enter any Number   : ");
  	scanf("%d", & Number);
  	
  	DigitsCount = log10(Number); 	
  	FirstDigit = Number / pow(10, DigitsCount);
  	
  	LastDigit = Number % 10;
  	
  	a = FirstDigit * (pow(10, DigitsCount));
  	b = Number % a;
  	Number = b / 10;
  	
  	SwapNum = LastDigit * (pow(10, DigitsCount)) + (Number * 10 + FirstDigit);
	    
	printf(" \n The Number after Swapping First Digit and Last Digit =  %d", SwapNum);
 
  	return 0;
}
