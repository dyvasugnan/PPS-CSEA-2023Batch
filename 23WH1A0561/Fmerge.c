#include <stdio.h>

int main() {
    FILE *file1, *file2, *mergedFile;

    
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Unable to open file1.txt for reading.\n");
        return 1;
    }

    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Unable to open file2.txt for reading.\n");
        fclose(file1);
        return 1;
    }

   
    mergedFile = fopen("mergedFile.txt", "w");
    if (mergedFile == NULL) {
        printf("Unable to create mergedFile.txt for writing.\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    char ch;

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile);
    }

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile);
    }

    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    printf("Files merged successfully.\n");

    return 0;
}
