#include<stdio.h>
int main() {
    int num,sum=0;
    scanf("%d",&num);
    for(int i=1;i<num;i++){
    if(num%i==0)
        sum = sum + i;
    }
    if(sum>num)
        printf("Yes");
    else
        printf("No");
    return 0;
}
