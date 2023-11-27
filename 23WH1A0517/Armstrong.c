#include <stdio.h>
#include <math.h>

int countNumberOfDigits(int number, int number_of_digits) {
  while (number > 0) {
    number /= 10;
    number_of_digits++;
  }
  return number_of_digits;
}

int isArmstrong(int number) {
  int current_digit, sum = 0, num = number, number_of_digits = 0;
  number_of_digits = countNumberOfDigits(num, number_of_digits);

  while (num > 0) {
    current_digit = num % 10;
    sum += pow(current_digit, number_of_digits);
    num /= 10;
  }

  if (sum == number) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int number, isArmstrongNumber;

  printf("Enter an N-digit number: ");
  scanf("%d", &number);

  isArmstrongNumber = isArmstrong(number);

  if (isArmstrongNumber == 1) {
    printf("%d is an Armstrong Number.", number);
  } else {
    printf("%d is not an Armstrong Number.", number);
  }

  return 0;
}

