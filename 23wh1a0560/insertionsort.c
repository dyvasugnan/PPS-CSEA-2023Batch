// insertion sorting using functions
#include <stdio.h>
void printArray(int [],int);
void insertionSort(int [],int);

int main() {
    int n;
    printf("enter n value\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d values\n",n);
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printArray(a,n);
    insertionSort(a,n);
    printf("\n");
    printArray(a,n);
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++)
         printf("%d ",a[i]);
}


void insertionSort(int a[],int n){
    int j,i,step,key;
    for(step=1;step<n;step++){
        key=a[step];
        j=step-1;
        while(key<a[j] && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

 
	

