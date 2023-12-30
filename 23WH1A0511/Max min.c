#include<stdio.h>
void main(){
    int num[30],range;
    printf("enter the number of values to be given: ");
    scanf("%d",&range);
    printf("enter any %d values: ",range);
    for(int i=0;i<range;i++){
        scanf("%d",&num[i]);
    }
    int g=(num[0]>num[1])?num[0]:num[1];
    int l=(num[0]<num[1])?num[0]:num[1];
    for(int i=2;i<range;i++){
        if(num[i]>g){
            g=num[i];
        }
    }
    for(int i=2;i<range;i++){
        if(num[i]<l){
            l=num[i];
        }
    }
    printf("maximum integer is: %d\n",g);
    printf("minimum integer is: %d",l);
}
