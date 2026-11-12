#include<stdio.h>
int main(void)
{
    int a[5], i, sum = 0;
    printf("\n Enter numbers for array: \n");
    for (i = 0; i<5 ; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("\nSum of Array = %d", sum);
    return 0;
}