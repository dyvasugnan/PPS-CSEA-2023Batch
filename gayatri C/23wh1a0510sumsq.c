//difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include<stdio.h>
void main(){
    int i,sum=0,add=0,sq,res,mult=1;
    for(i=1;i<=100;i++){
        mult =i*i;
        sum +=mult;
    }
   // printf("%d",sum);
    for(i=1;i<=100;i++){
        add += i;
        sq = add*add;
    }
    //printf("\n%d",sq);
    res = sq-sum;
    printf("%d",res);
}