/*this programme is to find whether the matrix is identity matrix or not*/
#include<stdio.h>
int main(){
             int mat[3][3],flag=0;
             printf("give  mat elements");
             for(int i=0;i<3;i++){
                      for(int j=0;j<3;j++){
                                            scanf("%d",&mat[i][j]);
                                            printf("%d",mat[i][j]);
                                           }
                                 }
             
              for(int i=0;i<3;i++){
                      for(int j=0;j<3;j++){
                                              if(i==j && mat[i][j]==1){
                                                            if(i<j && mat[i][j]==0){
                                                                      if(i>j && mat[i][j]==0){
                                                                            flag=0;
                                                                            break;}}}
                                           }
                                }
              if(flag==0)
                       printf("It is an identity matrix");
              else
                       printf("It is  not identity matrix");
                                          
         return 0;
 }                                    
