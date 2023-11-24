//in which quadrant (X,Y) exists
#include<stdio.h>
int main(){
int x_cor,y_cor;
printf("enter 2 values");
scanf("%d%d",&x_cor,&y_cor);
if(x_cor>0&&y_cor>0){
printf("it lies in the 1st quadrant");}
if(x_cor<0&&y_cor>0){
printf("it lies in the 2nd quadrant");}
if(x_cor<0&&y_cor<0)
printf("it lies in the 3rd quadrant");
if(x_cor>0&&y_cor<0)
printf("it lies in the 4th quadrant");
return 0;
}
