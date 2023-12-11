// to find element in a array using binary search
#include<stdio.h>
#include<stdbool.h>
bool binary_search(int[],int,int,int);
int main(){
    int a[100], range, key;
    printf("enter range: ");
    scanf("%d",&range);
    printf("enter %d elements into array: ",range);
    for(int i=0; i<range; i++)
        scanf("%d",&a[i]);
    printf("enter the key value to be found: ");
    scanf("%d",&key);
bool result = binary_search(a,key,0,range-1);
    if(result==1)
        printf("%d found",key);
    else
        printf("%d not found",key);
return 0;
}
bool binary_search(int a[], int key, int l, int h){
    int mid;
    while(l<=h){
        mid = (l+h)/2;
        if(a[mid] == key)
            return 1;
        if(a[mid < key])
            l = mid+1;
        else
            h = mid-1;
    }
return 0;
}
