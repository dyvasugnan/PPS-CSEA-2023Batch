//to find prime number in a array using linear search in functions
#include<stdio.h>
int search_prime(int[],int);
int main(){
    int arr[100],range;
    printf("enter the range: ");
    scanf("%d",&range);
    printf("enter the elements in to an array: ");
    for(int i=0; i<range; i++)
        scanf("%d",&arr[i]);
    int result=search_prime(arr,range);
    if(result>=0 && result<range)
        printf("prime number is found at index = %d",result);
    else
        printf("prime number not found");
return 0;
}
int search_prime(int arr[],int range){
    for(int i=0; i<range; i++){
        int count=0;
            for(int j=1; j<=arr[i]; j++){
                if(arr[i]%j==0)
                    count++;
            }
        if(count==2){
            printf("%d\n",arr[i]);
            return i;
            break;
        }
    }
    return -1;
}
