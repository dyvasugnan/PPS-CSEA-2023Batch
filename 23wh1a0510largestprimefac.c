#include <stdio.h>
void main(){
    int N,divisor=1;
    printf("Enter a positive number: ");
    scanf("%d", &N);
    for (int i = 2; i <= N; i++){
        if (N % i == 0){
            for (int j = 2; j < i; j++){
                if (i % j == 0 && j != i){
                    break;
                }
                else{
                divisor = i;
                }
            }
        }
    }
    printf("%i\n", divisor);
}