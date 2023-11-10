#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter any number(range of prime numbers): ");
    scanf("%d",&n);
    printf("prime number between 1 to %d are:",n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0)
            count++;
        }
        if(count==2){
            printf(" %d",i);
        }
        count=0;
    }
    return 0;
}
