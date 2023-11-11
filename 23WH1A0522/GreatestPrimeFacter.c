#include <stdio.h>
void main(){
    int num,gf,tempmax=0,count;
    printf("enter any number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf(" %d",i);
            count=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    count++;
                    if(count==2){
                        gf=(tempmax>j)?tempmax:j;
                        tempmax=gf;
                    }
                }
            }
        }
    }
    printf("\n Max prime number is :%d",gf);
}
