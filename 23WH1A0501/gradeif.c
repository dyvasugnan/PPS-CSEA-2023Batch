#include<stdio.h>
int main(){
float percentage;
printf("Enter you percentage: ");
scanf("%f",&percentage);
if(percentage>=90.00){
printf("A+");
}
else if(percentage>=80&&percentage<90){
printf("A");
}
else if(percentage>=70&&percentage<80){
printf("B+");
}
else if(percentage>=60&&percentage<70){
printf("B");
}
else if(percentage>=50&&percentage<60){
printf("C");
}
else{
printf("You failed.");
}
return 0;
}
