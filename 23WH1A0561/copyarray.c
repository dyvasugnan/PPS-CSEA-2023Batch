#include<stdio.h>
int main (){
int a[100],b[100],i,n;
printf("enter size of array");
scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("first array elements:\n");
for (i=0;i<n;i++){
printf("%d",a[i]);
}
 printf("coping array elements:\n");
for (i=0;i<n;i++){
b[i] = a[i];
}
printf("second array elements:\n");
for (i=0;i<n;i++){
printf("%d",b[i]);
}
return 0;
}
