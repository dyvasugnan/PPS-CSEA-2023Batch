#include <stdio.h>

int main() {
   
    FILE *file;

   
    file = fopen("example.txt", "w");

   
    if (file == NULL) {
        printf("Unable to create the file.\n");
        return 1;  
    }

    
    fprintf(file, "Hello, this is an example.");

  
    fclose(file);

    printf("File created successfully.\n");

    return 0;  
}
