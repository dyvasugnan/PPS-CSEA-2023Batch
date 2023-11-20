#include<stdio.h>
# include<stdbool.h>
int main(){
  int num[10];
  printf("enter any 10 numbers: ");
  for(int i=0;i<10;i++) 
    scanf("%d", &num[i]);
for(int i=0;i<10;i++);
  int count=0;
   bool found= false;
  for( int k=0;k<i,k++) {
    if(num[k]==num[i]){
        found=true;
          break;
    }
  }
if(found) 
  continue;
for(int j=0; j<10;j++) {
    if( num[i] == num[j]) 
       count++;
}
printf("\n frequency of %d:%d", num[i], count) ;
}
return 0;
}
