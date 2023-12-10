#include <stdio.h>
void sort(int [] ,int);
void printarray(int [] ,int n);
void swap(int *a,int *b){
	int temp = *a;
	*a = *b ;
	*b = temp;
}
int main()
{
    int a[]={1,9,3,6,2};
    int n = sizeof(a)/sizeof(a[0]);
    printarray(a,n);
    sort(a,n);
    printf("\n");
    printarray(a,n);
}

void sort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
            
        }
    }
    
}

void printarray(int a[],int n){
	int i;
    for( i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    

}


