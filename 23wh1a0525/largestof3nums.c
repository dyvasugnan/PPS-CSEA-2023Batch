/*this programme is to find largest of 3 numbers*/
#include<stdio.h>
int main(){
int num1,num2,num3;
printf("give 3 n.o's");
scanf("%d%d%d",&num1,&num2,&num3);
if (num1>num2){
	 if (num1>num3)
   		printf("num1 is largest");
	}
else if (num2>num3){
        if (num2>num1)
           printf("num2 is largest");
        else 
            printf("num2 is not largest");

}
else if (num3>num1){
      if (num3>num2)
    printf("num3 is largest");
       else
    printf("num3 is not largest");
}
return 0;
}
