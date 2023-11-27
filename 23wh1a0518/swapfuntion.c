#include <stdio.h>
void swap(int*,int*);
int main(){
    int a=10,b=12;
    printf("a=%d b=%d",a,b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);
}
void swap(int*p1,int*p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
