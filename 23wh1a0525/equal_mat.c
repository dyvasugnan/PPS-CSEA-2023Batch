/*this programme is to know whether the matrices are equal or not*/
#include<stdio.h>
int main() {
             int mat1[3][3],mat2[3][3] ,flag=0;
             printf("give elements in mat1 r*c");
             for(int i=0;i<3; i++){
                       for(int j=0; j<3;j++){
                                    
                                         scanf("%d",&mat1[i][j]);
                                         printf("%d",mat1[i][j]);

                                           }
                            printf("\n");
                                   }
              printf("give elements in mat2 r*c");
             for(int i=0;i<3;i++){
                         for(int j=0;j<3;j++){
                                              scanf("%d",&mat2[i][j]);
                                              printf("%d",mat2[i][j]);
                                             }
                               printf("\n");

                                             }
     
              for(int i=0;i<3;i++){
                            for(int j=0;j<3;j++){
                        
                                            if(mat1[i][j]!=mat2[i][j])
                                                flag=1;
                                                break;
                              }
                                 }

               if(flag==1)
                     printf("matrices are not equal");
               else
                     printf("matrices are  equal");

         return 0;
 }
