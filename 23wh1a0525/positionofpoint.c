#include<stdio.h>
int main (){
            int x,y;
            printf("give values for x & y");
            scanf("%d%d",&x,&y);
           if (x>0&&y>0)
               printf("x,y coordinates belong to 1st quadrant");
            else if (x<0&&y>0)
                printf("x,y coordinates belong to 2nd quadrant");
            else if (x<0&&y<0)
                printf("x,y coordinates belong to 3rd quadrant");
             else 
                printf("x,y coordinates belong to 4rth quadrant");
          return 0;
}
