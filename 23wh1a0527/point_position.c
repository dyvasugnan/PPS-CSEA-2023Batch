//this is to display the position of a given point
#include<stdio.h>
int main(){
int x,y;
printf("enter any values");
scanf("%d%d",&x,&y);
if(x>0 && y>0)
printf("point lies in 1st quadrant");
else if(x<0 && y>0)
printf("point lis in 2nd quadrant");
else if(x<0 && y<0)
printf("point lies in 3rd quadrant");
else if(x>0 && y<0)
printf("point lies in 4th quadrant");
return 0;
}
