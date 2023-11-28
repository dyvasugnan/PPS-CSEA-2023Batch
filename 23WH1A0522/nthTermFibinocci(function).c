#include <stdio.h>
int nth_fibinocci(int);
void main(){
    int n;
    printf("enter the nth term of fibinocci series required: ");
    scanf("%d",&n);
    int term_nth=nth_fibinocci(n);
    printf("%d",term_nth);
}
int nth_fibinocci(int x){
    int n1=0,n2=1,next,nth_term;
    if(x==2)
        next=1;
    for(int i=3;i<=x;i++){
        next=n1+n2;
        n1=n2;
        n2=next;
    }
    nth_term=next;
    return nth_term;
}
