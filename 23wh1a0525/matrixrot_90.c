/*This programme is to rotate the matrix upto 90 degrees*/
#include<stdio.h>
int main(){
           int mat[3][3];
            printf("give elements of mat r*c");
            for(int i=0;i<3;i++){
                   for(int j=0;j<3;j++){            
                                      scanf("%d",&mat[i][j]);
                                      printf("%d",mat[i][j]);
                                        }
                      printf("\n");
                                }
            for(int i=0;i<3;i++){
                        for(int j=2;j>=0;j--){
                                         printf("%d",mat[j][i]);
                                             }
                     printf("\n");
                                }
              return 0;
 }
            
