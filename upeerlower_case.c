
#include <stdio.h>

int isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase for case-insensitivity
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    FILE *inputFile, *vowelFile, *consonantFile;
    char ch;

    // Open the input file
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening the input file.\n");
        return 1;
    }

    // Open the vowel file
    vowelFile = fopen("vowels.txt", "w");
    if (vowelFile == NULL) {
        printf("Error opening the vowel file.\n");
        fclose(inputFile);
        return 1;
    }

    // Open the consonant file
    consonantFile = fopen("consonants.txt", "w");
    if (consonantFile == NULL) {
        printf("Error opening the consonant file.\n");
        fclose(inputFile);
        fclose(vowelFile);
        return 1;
    }

    // Process the input file character by character
    while ((ch = fgetc(inputFile)) != EOF) {
        if (isalpha(ch)) {
            if (isVowel(ch)) {
                fputc(ch, vowelFile);
            } else {
                fputc(ch, consonantFile);
            }
        }
    }

    // Close all files
    fclose(inputFile);
    fclose(vowelFile);
    fclose(consonantFile);

    printf("Separation completed successfully.\n");

    return 0;
}