#include <stdio.h>

int main()
{
    int arr1[3][3],arr2[3][3];
    printf("Enter first array elements:\n");
    int i,j,flag=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
     printf("Enter second array elements:\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&arr2[i][j]);
         }
     }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
              if(arr1[i][j]==arr2[i][j])
              flag=1;
              else
              flag=0;
         }
     }
     if(flag==1)
     printf("Both matrices are equal");
     else
     printf("Matrices are not equal");

    return 0;
}
