//Largest palindromic product of three digit num
#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int num){
	if (num == reverse(num))
		return true;
	else
		return false;
}
int reverse(int num){
	int temp , rem , revnum = 0;
	while(temp != 0){
		rem = temp % 10;
		revnum = revnum * 10 + rem;
		temp /= 10;
	}
	return revnum;
}
int smallestinArray(int arr[]){
	int i , len = sizeof(arr)/sizeof(arr[0]);
	int smallest = arr[0];
	for(i = 1 ; i < len ; i++)
		if (arr[i] < smallest)
			smallest  = arr[i];
	return smallest;
}
int main(){
	
	int i , j , k = 0 , palindromeProductsArr[900];
	for(i = 101 ; i < 1000 ; i++)
		for(j = 101 ; j < 1000 ; j++){
			int product = i * j;
			if(isPalindrome(product)){
				palindromeProductsArr[k] = product;
				k++;
			}
		}
	int smallestPalindromeProduct = smallestinArray(palindromeProductsArr);
	printf("%d" , smallestPalindromeProduct);
	return 0;
}
