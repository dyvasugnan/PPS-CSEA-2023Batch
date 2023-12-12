#include<stdio.h>
float s_i(float p,float t, float r){
float s_i;
s_i=(p*t*r)/100;
return s_i;
}
int main(){
float principle,time,rate,result;
scanf("%f %f %f",&principle,&time,&rate);
result=s_i(principle,time,rate);
printf("%f",result);

}


