#include<stdio.h>
int main(){
    int x,y,sum,diff;
    printf(" ");
    scanf("%d %d",&x,&y);
    sum = x+y;
    diff=x-y;
    printf("%d %d",sum,diff);
    float a,b,add,sub;
    printf(" ");
    scanf("%f %f",&a,&b);
    add = a+b;
    sub = a-b;
    printf("\n%.1f %.1f",add,sub);
    return 0;
}