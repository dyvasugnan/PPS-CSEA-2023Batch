#include<stdio.h>
int main()
{
    int a[10],a1[10];
    int i,n,k=0;
    printf("Enter 10 elements of array: ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number of times to rotate: ");
    scanf("%d",&n);
    for(i=n;i<10;i++){
        a1[k]=a[i];
        k++;
    }
    for(i=0;i<n;i++){
        a1[k]=a[i];
        k++;
    }
    printf("array = ");
    for(i=0;i<10;i++){
        printf("%2d",a[i]);
    }
    printf("\n");
    printf("array (after rotation)= ");
    for(i=0;i<10;i++){
        printf("%2d",a1[i]);
    }
}
