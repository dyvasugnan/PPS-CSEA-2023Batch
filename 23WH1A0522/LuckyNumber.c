#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int dob,dig,sum=0;
    scanf("%d",&dob);
    while(dob!=0){
        dig=dob%10;
        sum=sum+dig;
        dob=dob/10;
        if(dob == 0 && sum > 9){
            dob = sum;
            sum =0;
        }
    }
    printf("%d",sum);
    return 0;
}
