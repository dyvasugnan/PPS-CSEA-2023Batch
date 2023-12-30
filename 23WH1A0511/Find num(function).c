#include<stdio.h>
int linear_search(int[],int,int);
int main(){
    int n;
    printf("enter the range of array: ");
    scanf("%d",&n);
    int num[n],key;
    printf("enter %d numbers: ",n);
    for(int i=1;i<=n;i++)
        scanf("%d",&num[i]);
    printf("enter the element to be found: ");
    scanf("%d",&key);
    int found = linear_search(num,n,key);
    if(found==0)
        printf("no such number is found.");
    else
        printf("%d is found at %d position",key,found);
    return 0;
}
int linear_search(int a[],int l,int k){
    int count=0;
    for(int i=1;i<=l;i++){
        if(a[i]==k)
        count=i;
    }
    return count;
}
