#include<stdio.h>
#include<string.h>
int main() 
{ 
  
    int a[10] = { 10,1,95,30,45,12,60,89,40,-4 }, n = 10; 
    int b[n], i; 
    for (i = 0; i < n; i++) { 
        b[i] = a[i]; 
    } 
    for (i = 0; i < n; i++) { 
        printf("%d ", a[i]); 
    } 
    printf("\nThe second array is :"); 
    for (i = 0; i < n; i++) { 
        printf("%d ", b[i]); 
    } 
    return 0; 
}
