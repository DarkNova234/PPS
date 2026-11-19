#include <stdio.h>
int main()
{
    int a[3][3] = {{9,3,1},{2,4,4},{2,5,3}}, b[3][3]= {{0,5,1},{1,3,8},{6,1,3}}, mul[3][3];
    int i,j,k;

    for(i = 0; i < 3 ; i++)
        {
            for(j = 0; j < 3 ; j++)
                {
                    mul[i][j] = 0;
                    for(k = 0; k < 3 ; k++)
                    {
                        mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                    }
                }
        }
    printf("Multiplication of Matrix is: \n");

    for(i = 0; i < 3 ; i++)
        {
            for(j = 0; j < 3 ; j++)
                {
                    printf(" %d ", mul[i][j]);
                }
            printf("\n");
        }
   
    return 0;
}
