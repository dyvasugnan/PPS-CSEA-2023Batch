#include <stdio.h>
#include<stdbool.h>
bool isStrong();
int fact();
int main()
{
int n;
printf("Enter n");
scanf("%d",&n);
bool result = isStrong(n);
if(result==1) printf("Strong number");
else printf("Not a strong number");
}
bool isStrong(int n){
  int  temp=n;
  int sum_fact=0;
  while(n!=0){
 int  rem=n%10;
  n/=10;
  sum_fact=sum_fact+fact(rem);
    
}
if(temp==sum_fact){
    return 1;
}
else return 0;

}
int fact(int n){
   int fact=1;
   int i;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
    


