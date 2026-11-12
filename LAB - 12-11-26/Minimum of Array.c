#include <stdio.h>
int main()
{
    int a[6], i, min = a[0];
    printf("Enter values for array: \n");
    for (i=0 ; i<5 ; i++)
        scanf("%d",&a[i]);
    for (i = 1; i<5 ; i++)
        {
            if (a[i] < min)
            min = a[i];
        }      
        printf("Maximum of Array is %d", min);
    return 0;
}