#include<stdio.h>
int main(){
int x,y;
printf("Enter the x and y coordinates of a point: ");
scanf("%d%d",&x,&y);
if(x>0&&y>0){
printf("1st quadrant");
}
else if(x>0&&y<0){
printf("2nd quadrant");
}
else if(x<0&&y<0){
printf("3rd quadrant");
}
else{
printf("4th quadrant");
}
return 0;
}
