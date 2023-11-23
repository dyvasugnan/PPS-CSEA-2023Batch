#include <stdio.h>
int main() {
    int i;
    int n;
    scanf("%d",&n);
    i=n;
    while(i!=1){
         if(i%2==0)
            i=i/2;
        else
            i = (3*i)+1;
        printf("%d-",i);
    }
    return 0;
}
