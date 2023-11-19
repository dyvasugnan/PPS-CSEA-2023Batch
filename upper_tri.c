/*this programme is to find whether the given matrix is upper triangular or not*/
#include<stdio.h>
int main(){
           int mat[3][3],flag=0;
           printf("give matrix elements");
           for(int i=0;i<3;i++){
                 for(int j=0;j<3;j++){
                                  scanf("%d",&mat[i][j]);
                                  printf("%d",mat[i][j]);
                                      }
                               }
            for(int i=0;i<3;i++){
                  for(int j=0;j<3;j++){
                                      
                                              
                                         if(i>j){
                                                 if(mat[i][j]!=0){
                                                    flag=1;
                                                    break;}
                                                       }
                 
                                        } 
                                    }
                    if(flag==1)
                             printf("not upper triangle");
                    else
                             printf("upper triangle");
               return 0;
 }                  
                                              
