#include <stdio.h>
int main()
{
    int a[3][2] = {1,2,3,4,5,6} , b[3][2] = {10,20,30,40,50,60} , i, j, sum[3][2];
     for(i = 0; i < 3; i++)
        {
            for( j = 0 ; j < 2 ; j++)
                {
                    sum[i][j] = a[i][j] + b[i][j];
                }
        }

    //Sum of matrix
    printf("Sum of Matrix a and b is: \n");
         for(i = 0; i < 3; i++)
        {
            for( j = 0 ; j < 2 ; j++)
                {
                    printf("%d ", sum[i][j]);
                }
            printf("\n");
        }
    return 0;
}