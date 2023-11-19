#include <stdio.h>
    #include <stdlib.h>
 
    void main() 
    {
 
        int a[100][100];
        int i, j, r,c,sum=0;
 
        printf("Enter the order of the matrix\n");
        scanf("%d %d", &r, &c);
 
        printf("Enter the elements of matrix \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++) 
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("MATRIX : \n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++) 
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
 
        }
            for (i = 0; i < r; i++) 
            {
                for (j = 0; j < c; j++)
                {
                    if (i==j)
                    {
                        sum+= a[i][j];
                    }
                 }
            }
    
     printf("Trace = %d",sum);
 
}

