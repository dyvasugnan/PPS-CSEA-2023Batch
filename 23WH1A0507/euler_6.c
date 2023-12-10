#include<stdio.h>
int main(){
    int t; 
    scanf("%d",&t);
    int a0=0;
    for(a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
     long int  sum_sq=(n*(n+1)*((2*n)+1))/6;
     long int  sq_sum=(n*(n+1)/2)*(n*(n+1)/2);
        printf("%ld\n",sq_sum-sum_sq);
    }
    return 0;
}

