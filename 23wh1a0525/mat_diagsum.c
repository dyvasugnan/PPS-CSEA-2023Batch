/*this programme is to find sum of daigonal elements of a matrix*/
#include<stdio.h>
int main() {
             int mat[3][3],sumofdiag=0;
             printf("give elements of mat r*c");
             for(int i=0;i<3;i++){
                      for(int j=0;j<3;j++){
                                            scanf("%d",&mat[i][j]);
                                            printf("%d",mat[i][j]);
                                          }
                                    printf("\n");
                                 }
             for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                                          if(i==j)
                                                 sumofdiag=sumofdiag+mat[i][j];
                                        }
                                }
              printf("sumofdiag=%d",sumofdiag);
          return 0;
 }

