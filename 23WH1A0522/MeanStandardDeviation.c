#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int data[100],i,datalen;
    float sum=0,sd;
    printf("number of data values:");
    scanf("%d",&datalen);
    printf("enter the data values: ");
    for(i=0;i<datalen;i++){
        scanf("%d",&data[i]);
    }
    for(i=0;i<datalen;i++){
        sum=sum+data[i];
    }
    float mean=sum/datalen;
    printf("mean of the data is: %.3f\n",mean);
    for(i=0;i<datalen;i++){
        sd=sd+((data[i]-mean)*(data[i]-mean));
    }
    float stand=sqrt((sd)/datalen);
    printf("standard deviation of the data is: %.3f",stand);
    return 0;
}
