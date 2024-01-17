//bubble sort
#include<stdio.h>
void display_array(int,int[]);
void swap(int*,int*);
void bubble_sort(int,int[]);
int main(){
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
    bubble_sort(size,num);
    printf("\nelements after sorting are: ");
    display_array(size,num);
}
void bubble_sort(int l,int a[]){
    for(int i=0;i<l-i+1;i++){
        for(int j=0;j<l-i-1;j++){
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
        }
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
