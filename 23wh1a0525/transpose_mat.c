/*this programme is to find transpose of matrix*/
#include<stdio.h>
int main(){
           int mat[2][2];
           printf("give elements r*c");
           for(int i=0;i<2;i++){
                      for(int j=0;j<2;j++){             
                                           scanf("%d",&mat[i][j]);
                                          }
                               }
            for(int i=0;i<2;i++){
                        for(int j=0;j<2;j++){
                                              printf("%d",mat[i][j]);
                                            }
                    printf("\n");
                                }
            for(int i=0;i<2;i++){
                      for(int j=0;j<2;j++){
                                           if(i<j){
                                                  
                                                  printf("%d",mat[j][i]);}
                                            else if(j<i){
                                                   
                                                  printf("%d",mat[j][i]);}
                                            else
                                                   printf("%d",mat[i][j]);
                                          }
                printf("\n");
                               }
      return 0;
 }
