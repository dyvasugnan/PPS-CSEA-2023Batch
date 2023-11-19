#include<stdio.h>
int main(){
    int t,i,n,sum,a; 
    scanf("%d",&t);
    for(i=0; i<t;i++){
        scanf("%d\n",&n);
        sum = 0;
        a= (n-1)/3;
        sum = sum + ((3*a*(a+1))/2);
        
        a= (n-1)/5;
sum = sum + ((5*a*(a+1))/2);
        
        a=(n-1)/15;
        sum= sum - ((15*a*(a+1))/2);
        printf("%d\n",sum);
    }
    return 0;
}
