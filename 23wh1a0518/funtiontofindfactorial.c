#include <stdio.h>
int fact(int);
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    int result = fact(num);
    printf("%d",result);
}
int fact(int num){
    int fact = 1;
    for(int i = 1;i <= num;i++){
        fact = fact*i;
    }
    return fact;
}
