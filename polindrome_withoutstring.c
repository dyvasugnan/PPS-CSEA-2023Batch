#include <stdio.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Compare characters from start and end
        if (str[start] != str[end]) {
            return false; // Not a palindrome
        }

        // Move to the next pair of characters
        start++;
        end--;
    }

    return true; // Palindrome
}

int main() {
    char input[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", input);

    // Check if the input string is a palindrome
    if (isPalindrome(input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}