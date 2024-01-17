//selection sort
#include<stdio.h>
void display_array(int,int[]);
void swap(int*,int*);
void selection_sort(int,int[]);
void main(){
    int size;
    printf("enter the range of numbers: ");
    scanf("%d",&size);
    int num[size];
    printf("enter %d numbers:",size);
    for(int i=0;i<size;i++){
        scanf("%d",&num[i]);
    }
    printf("array elements are: ");
    display_array(size,num);
    selection_sort(size,num);
    printf("\nelements after sorting are: ");
    display_array(size,num);
}
void selection_sort(int l,int a[]){
    int minindex;
    for(int i=0;i<l-1;i++){
        minindex=i;
        for(int j=i;j<l;j++){
            if(a[minindex]>a[j])
            minindex=j;
        }
        if(minindex!=i)
            swap(&a[minindex],&a[i]);
    }
}
void swap(int *num1,int *num2){
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
void display_array(int l,int a[]){
    for(int i=0;i<l;i++)
        printf("%d ",a[i]);
}
